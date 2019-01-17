//MPU6050.cppを変換

// I2Cdev library collection - MPU6050 I2C device class
// Based on InvenSense MPU-6050 register map document rev. 2.0, 5/19/2011 (RM-MPU-6000A-00)
// 8/24/2011 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//
// Changelog:
//     ... - ongoing debug release

// NOTE: THIS IS ONLY A PARIAL RELEASE. THIS DEVICE CLASS IS CURRENTLY UNDERGOING ACTIVE
// DEVELOPMENT AND IS STILL MISSING SOME IMPORTANT FEATURES. PLEASE KEEP THIS IN MIND IF
// YOU DECIDE TO USE THIS PARTICULAR CODE FOR ANYTHING.

/* ============================================
I2Cdev device library code is placed under the MIT license
Copyright (c) 2012 Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/


namespace MPU6050
{


    public partial class MPU6050
    {
        public MPU6050() {
            devAddr = MPU6050_DEFAULT_ADDRESS;
        }

        public MPU6050(byte address) {
            devAddr = address;
        }

        void initialize()
        {
            setClockSource(MPU6050_CLOCK_PLL_XGYRO);
            setFullScaleGyroRange(MPU6050_GYRO_FS_250);
            setFullScaleAccelRange(MPU6050_ACCEL_FS_2);
            setSleepEnabled(false); // thanks to Jack Elston for pointing this one out!
        }

        bool testConnection()
        {
            return getDeviceID() == 0x34;
        }
        
        void setRate(byte rate)
        {
            writeByte(devAddr, MPU6050_RA_SMPLRT_DIV, rate);
        }

        void setExternalFrameSync(byte sync)
        {
            writeBits(devAddr, MPU6050_RA_CONFIG, MPU6050_CFG_EXT_SYNC_SET_BIT, MPU6050_CFG_EXT_SYNC_SET_LENGTH, sync);
        }

        void setDLPFMode(byte mode)
        {
            writeBits(devAddr, MPU6050_RA_CONFIG, MPU6050_CFG_DLPF_CFG_BIT, MPU6050_CFG_DLPF_CFG_LENGTH, mode);
        }

        void setFullScaleGyroRange(byte range)
        {
            writeBits(devAddr, MPU6050_RA_GYRO_CONFIG, MPU6050_GCONFIG_FS_SEL_BIT, MPU6050_GCONFIG_FS_SEL_LENGTH, range);
        }

        void setFullScaleAccelRange(byte range)
        {
            writeBits(devAddr, MPU6050_RA_ACCEL_CONFIG, MPU6050_ACONFIG_AFS_SEL_BIT, MPU6050_ACONFIG_AFS_SEL_LENGTH, range);
        }

        void setMotionDetectionThreshold(byte threshold)
        {
            writeByte(devAddr, MPU6050_RA_MOT_THR, threshold);
        }

        void setMotionDetectionDuration(byte duration)
        {
            writeByte(devAddr, MPU6050_RA_MOT_DUR, duration);
        }

        void setZeroMotionDetectionThreshold(byte threshold)
        {
            writeByte(devAddr, MPU6050_RA_ZRMOT_THR, threshold);
        }

        void setZeroMotionDetectionDuration(byte duration)
        {
            writeByte(devAddr, MPU6050_RA_ZRMOT_DUR, duration);
        }
        
        void setSlaveAddress(byte num, byte address)
        {
            if (num > 3) return;
            writeByte(devAddr, (byte)(MPU6050_RA_I2C_SLV0_ADDR + num * 3), address);
        }

        void setIntEnabled(byte enabled)
        {
            writeByte(devAddr, MPU6050_RA_INT_ENABLE, enabled);
        }
        
        byte getIntStatus()
        {
            readByte(devAddr, MPU6050_RA_INT_STATUS, ref buffer[0]);
            return buffer[0];
        }

        void setFIFOEnabled(bool enabled)
        {
            byte _b = 0x00;
            if(enabled) _b = 0x01;
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_FIFO_EN_BIT, _b);
        }

        void setI2CMasterModeEnabled(bool enabled)
        {
            byte _b = 0x00;
            if (enabled) _b = 0x01;
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_I2C_MST_EN_BIT, _b);
        }

        void resetFIFO()
        {
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_FIFO_RESET_BIT, 0x01);
        }

        void resetI2CMaster()
        {
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_I2C_MST_RESET_BIT, 0x01);
        }

        void reset()
        {
            writeBit(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_DEVICE_RESET_BIT, 0x01);
        }

        void setSleepEnabled(bool enabled)
        {
            byte _b = 0x00;
            if (enabled) _b = 0x01;
            writeBit(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_SLEEP_BIT, _b);
        }

        void setClockSource(byte source)
        {
            writeBits(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_CLKSEL_BIT, MPU6050_PWR1_CLKSEL_LENGTH, source);
        }

        uint getFIFOCount()
        {
            readBytes(devAddr, MPU6050_RA_FIFO_COUNTH, 2, ref buffer);
            return (((uint)buffer[0]) << 8) | buffer[1];
        }

        void getFIFOBytes(ref byte[] data, uint length)
        {
            data = new byte[data.Length];
            if (length > 0)
            {
                readBytes(devAddr, MPU6050_RA_FIFO_R_W, (byte)length, ref data);            
            }
        }

        byte getDeviceID()
        {
            readBits(devAddr, MPU6050_RA_WHO_AM_I, MPU6050_WHO_AM_I_BIT, MPU6050_WHO_AM_I_LENGTH, ref buffer[0]);
            return buffer[0];
        }

        void setOTPBankValid(bool enabled)
        {
            byte _b = 0x00;
            if (enabled) _b = 0x01;
            writeBit(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OTP_BNK_VLD_BIT, _b);
        }

        int getXGyroOffsetTC()
        {
            readBits(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
            return buffer[0];
        }

        void setXGyroOffsetTC(int offset)
        {
            writeBits(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
        }

        int getYGyroOffsetTC()
        {
            readBits(devAddr, MPU6050_RA_YG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
            return buffer[0];
        }

        void setYGyroOffsetTC(int offset)
        {
            writeBits(devAddr, MPU6050_RA_YG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
        }

        int getZGyroOffsetTC()
        {
            readBits(devAddr, MPU6050_RA_ZG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
            return buffer[0];
        }

        void setZGyroOffsetTC(int offset)
        {
            writeBits(devAddr, MPU6050_RA_ZG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
        }

        void setXGyroOffset(int offset)
        {
            writeWord(devAddr, MPU6050_RA_XG_OFFS_USRH, offset);
        }

        void setYGyroOffset(int offset)
        {
            writeWord(devAddr, MPU6050_RA_YG_OFFS_USRH, offset);
        }

        void setZGyroOffset(int offset)
        {
            writeWord(devAddr, MPU6050_RA_ZG_OFFS_USRH, offset);
        }

        void setDMPEnabled(bool enabled)
        {
            byte _b = 0x00;
            if (enabled) _b = 0x01;
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_DMP_EN_BIT, _b);
        }

        void resetDMP()
        {
            writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_DMP_RESET_BIT, 0x01);
        }

        void setMemoryBank(byte bank, bool prefetchEnabled, bool userBank)
        {
            bank &= 0x1F;
            if (userBank) bank |= 0x20;
            if (prefetchEnabled) bank |= 0x40;
            writeByte(devAddr, MPU6050_RA_BANK_SEL, bank);
        }

        void setMemoryStartAddress(byte address)
        {
            writeByte(devAddr, MPU6050_RA_MEM_START_ADDR, address);
        }

        void readMemoryBlock(ref byte data, uint dataSize, byte bank, byte address)
        {
            setMemoryBank(bank,false,false);
            setMemoryStartAddress(address);
            byte chunkSize;
            for (uint i = 0; i < dataSize;)
            {
                // determine correct chunk size according to bank position and data size
                chunkSize = MPU6050_DMP_MEMORY_CHUNK_SIZE;

                // make sure we don't go past the data size
                if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);

                // make sure this chunk doesn't go past the bank boundary (256 bytes)
                if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);

                // read the chunk of data as specified
                readBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, data + i);

                // increase byte index by [chunkSize]
                i += chunkSize;

                // byte automatically wraps to 0 at 256
                address += chunkSize;

                // if we aren't done, update bank (if necessary) and address
                if (i < dataSize)
                {
                    if (address == 0) bank++;
                    setMemoryBank(bank, false, false);
                    setMemoryStartAddress(address);
                }
            }
        }

//        bool writeMemoryBlock(const byte* data, uint dataSize, byte bank, byte address, bool verify, bool useProgMem) {        
        bool writeMemoryBlock(ref byte data, uint dataSize, byte bank, byte address, bool verify, bool useProgMem) {
            setMemoryBank(bank, false, false);
            setMemoryStartAddress(address);
            byte chunkSize;
            byte[] verifyBuffer; //byte*
            byte[] progBuffer; //byte*
            uint i;
            byte j;

            if (verify)
            {
                verifyBuffer = new byte[MPU6050_DMP_MEMORY_CHUNK_SIZE];
            } else
            {
                verifyBuffer = new byte[] { 0 };
            }


            if (useProgMem)
            {
                progBuffer = new byte[MPU6050_DMP_MEMORY_CHUNK_SIZE];
            } else
            {
                progBuffer = new byte[] { 0 };
            }

            for (i = 0; i < dataSize;)
            {
                // determine correct chunk size according to bank position and data size
                chunkSize = MPU6050_DMP_MEMORY_CHUNK_SIZE;

                // make sure we don't go past the data size
                if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);

                // make sure this chunk doesn't go past the bank boundary (256 bytes)
                if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);

                if (useProgMem)
                {
                    // write the chunk of data as specified
                    for (j = 0; j < chunkSize; j++) progBuffer[j] = pgm_read_byte(data + i + j); //pgm_read_byte(data + i + j)
                }
                else
                {
                    // write the chunk of data as specified
                    progBuffer = (byte*)data + i;
                }

                writeBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, ref progBuffer);

                // verify data if needed
                if (verify && verifyBuffer)
                {
                    setMemoryBank(bank, false, false);
                    setMemoryStartAddress(address);
                    readBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, ref verifyBuffer);
                    if (memcmp(progBuffer, verifyBuffer, chunkSize) != 0)
                    {
                        free(verifyBuffer);
                        if (useProgMem) free(progBuffer);
                        return false; // uh oh.
                    }
                }

                // increase byte index by [chunkSize]
                i += chunkSize;

                // byte automatically wraps to 0 at 256
                address += chunkSize;

                // if we aren't done, update bank (if necessary) and address
                if (i < dataSize)
                {
                    if (address == 0) bank++;
                    setMemoryBank(bank, false, false);
                    setMemoryStartAddress(address);
                }
            }
            if (verify) free(verifyBuffer);
            if (useProgMem) free(progBuffer);
            return true;
        }

        //bool writeProgMemoryBlock(const byte* data, uint dataSize, byte bank, byte address, bool verify)
        bool writeProgMemoryBlock(ref byte data, uint dataSize, byte bank, byte address, bool verify)
        {
            return writeMemoryBlock(data, dataSize, bank, address, verify, true);
        }

        //        bool writeDMPConfigurationSet(const byte* data, uint dataSize, bool useProgMem)
        bool writeDMPConfigurationSet(ref byte data, uint dataSize, bool useProgMem)
        {
            byte* progBuffer = 0;
            byte success, special;
            uint i, j;
            if (useProgMem)
            {
                progBuffer = (byte*)malloc(8); // assume 8-byte blocks, realloc later if necessary
            }

            // config set data is a long string of blocks with the following structure:
            // [bank] [offset] [length] [byte[0], byte[1], ..., byte[length]]
            byte bank, offset, length;
            for (i = 0; i < dataSize;)
            {
                if (useProgMem)
                {
                    bank = pgm_read_byte(data + i++);
                    offset = pgm_read_byte(data + i++);
                    length = pgm_read_byte(data + i++);
                }
                else
                {
                    bank = data[i++];
                    offset = data[i++];
                    length = data[i++];
                }

                // write data or perform special action
                if (length > 0)
                {
                    if (useProgMem)
                    {
                        if (sizeof(progBuffer) < length) progBuffer = (byte*)realloc(progBuffer, length);
                        for (j = 0; j < length; j++) progBuffer[j] = pgm_read_byte(data + i + j);
                    }
                    else
                    {
                        progBuffer = (byte*)data + i;
                    }
                    success = writeMemoryBlock(progBuffer, length, bank, offset, true);
                    i += length;
                }
                else
                {
                    if (useProgMem)
                    {
                        special = pgm_read_byte(data + i++);
                    }
                    else
                    {
                        special = data[i++];
                    }
                    if (special == 0x01)
                    {
                        writeByte(devAddr, MPU6050_RA_INT_ENABLE, 0x32);  // single operation

                        success = true;
                    }
                    else
                    {
                        // unknown special command
                        success = false;
                    }
                }

                if (!success)
                {
                    if (useProgMem) free(progBuffer);
                    return false; // uh oh
                }
            }
            if (useProgMem) free(progBuffer);
            return true;
        }

        //        bool writeProgDMPConfigurationSet(const byte* data, uint dataSize)
        bool writeProgDMPConfigurationSet(ref byte data, uint dataSize)
        {
            return writeDMPConfigurationSet(data, dataSize, true);
        }
        
        void setDMPConfig1(byte config)
        {
            writeByte(devAddr, MPU6050_RA_DMP_CFG_1, config);
        }
        
        void setDMPConfig2(byte config)
        {
            writeByte(devAddr, MPU6050_RA_DMP_CFG_2, config);
        }
    }
}

