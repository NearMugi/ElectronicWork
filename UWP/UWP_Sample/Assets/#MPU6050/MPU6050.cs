//MPU6050.cppを変換

// I2Cdev library collection - MPU6050 I2C device class
// Based on InvenSense MPU-6050 register map document rev. 2.0, 5/19/2011 (RM-MPU-6000A-00)
// 8/24/2011 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//
// Changelog:
//     ... - ongoing //Debug release

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

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

#if WINDOWS_UWP
using Windows.Devices.Enumeration;
using Windows.Devices.I2c;
using Windows.Devices.Gpio;
#endif

namespace MPU6050
{


    public partial class MPU6050 : IDisposable
    {
        public String mpu6050Msg = "";
        public bool isInitErr;

        public bool isInitHardware;


#if WINDOWS_UWP
        I2cDevice _mpu6050Device = null;
        private GpioController IoController;
#endif

        public MPU6050() {
            devAddr = MPU6050_DEFAULT_ADDRESS;
            mpu6050Msg = "\n";
            isInitErr = false;
        }

        public MPU6050(byte address) {
            devAddr = address;
            mpu6050Msg = "\n";
            isInitErr = false;
        }

        public void ischkInitErr()
        {
            if (isInitErr) devStatus = 5;
        }
        
        public async void InitHardware()
        {
            isInitHardware = false;
            try
            {
#if WINDOWS_UWP
                mpu6050Msg = "[Start InitHardware]\n";
                
                IoController = GpioController.GetDefault();

                string aqs = I2cDevice.GetDeviceSelector();
                DeviceInformationCollection collection = await DeviceInformation.FindAllAsync(aqs);

                I2cConnectionSettings settings = new I2cConnectionSettings(devAddr);
                settings.BusSpeed = I2cBusSpeed.FastMode; // 400kHz clock
                settings.SharingMode = I2cSharingMode.Exclusive;
                _mpu6050Device = await I2cDevice.FromIdAsync(collection[0].Id, settings);

                await Task.Delay(3); // wait power up sequence
                isInitHardware = true;
#endif
            }
            catch (Exception ex)
            {
                string error = ex.ToString();
                mpu6050Msg = error;
                isInitErr = true;
            }
        }

        public void initialize()
        {
            if (isInitErr) return;

            setClockSource(MPU6050_CLOCK_PLL_XGYRO);
            setFullScaleGyroRange(MPU6050_GYRO_FS_250);
            setFullScaleAccelRange(MPU6050_ACCEL_FS_2);
            setSleepEnabled(false); // thanks to Jack Elston for pointing this one out!
            mpu6050Msg = "End Initialize\n";
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
        
        public byte getIntStatus()
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

        public void resetFIFO()
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

        public uint getFIFOCount()
        {
            readBytes(devAddr, MPU6050_RA_FIFO_COUNTH, 2, ref buffer);
            return (((uint)buffer[0]) << 8) | buffer[1];
        }

        public void getFIFOBytes(ref byte[] data, uint length)
        {
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


        public void setZAccelOffset(int offset)
        {
            if (isInitErr) return;
            writeWord(devAddr, MPU6050_RA_ZA_OFFS_H, offset);
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

        public void setXGyroOffset(int offset)
        {
            if (isInitErr) return;
            writeWord(devAddr, MPU6050_RA_XG_OFFS_USRH, offset);
        }

        public void setYGyroOffset(int offset)
        {
            if (isInitErr) return;
            writeWord(devAddr, MPU6050_RA_YG_OFFS_USRH, offset);
        }

        public void setZGyroOffset(int offset)
        {
            if (isInitErr) return;
            writeWord(devAddr, MPU6050_RA_ZG_OFFS_USRH, offset);
        }

        public void setDMPEnabled(bool enabled)
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

        //1か所からしか呼ばれない
        //chunkSize = dataSizeで問題ない
        void readMemoryBlock(ref byte[] data, uint dataSize, byte bank, byte address)
        {
            setMemoryBank(bank,false,false);
            setMemoryStartAddress(address);
            for (uint i = 0; i < dataSize;)
            {
                // read the chunk of data as specified
                byte[] _tmp = new byte[dataSize];
                readBytes(devAddr, MPU6050_RA_MEM_R_W, (byte)dataSize, ref _tmp);
                for(int j = 0; j < dataSize; j++)
                {
                    data[j] = _tmp[j];
                }

                // increase byte index by [chunkSize]
                i += dataSize;

                // byte automatically wraps to 0 at 256
                address += (byte)dataSize;

                // if we aren't done, update bank (if necessary) and address
                if (i < dataSize)
                {
                    if (address == 0) bank++;
                    setMemoryBank(bank, false, false);
                    setMemoryStartAddress(address);
                }
            }
        }

        int memcmp(byte[] _a, byte[] _b, int size)
        {
            int ret = 0;
            bool isSame = true;

            for(int i = 0; i< size; i++)
            {
                if (_a[i] != _b[i]) isSame = false;
            }
            
            if (!isSame) ret = -1;

            return ret;
        }

        //bool writeMemoryBlock(const byte* data, uint dataSize, byte bank, byte address, bool verify, bool useProgMem) {  
        //verifyはTrueしかない。
        //dataは定数の配列
        //useProgMemに関係なく同じ処理になる
        bool writeMemoryBlock(byte[] data, uint dataSize, byte bank, byte address) {
            byte chunkSize;
            byte[] verifyBuffer = new byte[MPU6050_DMP_MEMORY_CHUNK_SIZE];
            byte[] progBuffer; //byte*

            setMemoryBank(bank, false, false);
            setMemoryStartAddress(address);

            for (int i = 0; i < dataSize;)
            {
                // determine correct chunk size according to bank position and data size
                chunkSize = MPU6050_DMP_MEMORY_CHUNK_SIZE;

                // make sure we don't go past the data size
                if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);

                // make sure this chunk doesn't go past the bank boundary (256 bytes)
                if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);


                // write the chunk of data as specified
                progBuffer = new byte[chunkSize];
                for (int j = 0; j < chunkSize; j++) progBuffer[j] = data[i + j]; //pgm_read_byte(data + i + j)

                writeBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, progBuffer);

                // verify data
                setMemoryBank(bank, false, false);
                setMemoryStartAddress(address);
                readBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, ref verifyBuffer);
                if (memcmp(progBuffer, verifyBuffer, chunkSize) != 0)
                {
                    return false; // uh oh.
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
            return true;
        }

        //bool writeProgMemoryBlock(const byte* data, uint dataSize, byte bank, byte address, bool verify)
        bool writeProgMemoryBlock(byte[] data, uint dataSize, byte bank, byte address)
        {
            return writeMemoryBlock(data, dataSize, bank, address);
        }

        //bool writeDMPConfigurationSet(const byte* data, uint dataSize, bool useProgMem)
        //useProgMemはTrueしかない。
        //data -> dmpConfig
        //dataSize -> MPU6050_DMP_CONFIG_SIZE(192)
        bool writeDMPConfigurationSet()
        {
            
            bool success = true;

            // config set data is a long string of blocks with the following structure:
            // [bank] [offset] [length] [byte[0], byte[1], ..., byte[length]]
            byte bank, offset, length;
            for (int i = 0; i < MPU6050_DMP_CONFIG_SIZE;)
            {
                //最初の3バイトはBank,Offset,Length
                bank = dmpConfig[i]; //pgm_read_byte(data + i++);
                offset = dmpConfig[i+1]; //pgm_read_byte(data + i++);
                length = dmpConfig[i+2]; //pgm_read_byte(data + i++);
                i += 3;

                // write data or perform special action
                if (length > 0)
                {
                    byte[] progBuffer = new byte[length];
                    for (int j = 0; j < length; j++)
                    {
                        progBuffer[j] = dmpConfig[i + j]; // pgm_read_byte(data + i + j);
                    }
                    //success = writeMemoryBlock(progBuffer, length, bank, offset, true, false);
                    success = writeMemoryBlock(progBuffer, length, bank, offset);
                    i += length;
                }
                else
                {
                    //dmpConfigの中で1か所だけ該当。
                    //0x00,   0x00,   0x00,   0x01,                     // SET INT_ENABLE at i=22, SPECIAL INSTRUCTION
                    byte special = dmpConfig[i++];  //pgm_read_byte(data + i++);
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
                    return false; // uh oh
                }
            }
            
            return true;
        }
        
        void setDMPConfig1(byte config)
        {
            writeByte(devAddr, MPU6050_RA_DMP_CFG_1, config);
        }
        
        void setDMPConfig2(byte config)
        {
            writeByte(devAddr, MPU6050_RA_DMP_CFG_2, config);
        }




        #region IDisposable Support
        private bool disposedValue = false; // To detect redundant calls

        protected virtual void Dispose(bool disposing)
        {
            if (!disposedValue)
            {
#if WINDOWS_UWP
                if (_mpu6050Device != null)
                {
                    _mpu6050Device.Dispose();
                    _mpu6050Device = null;
                }
#endif
                disposedValue = true;

            }
        }

        ~MPU6050()
        {
            // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
            Dispose(false);
        }

        // This code added to correctly implement the disposable pattern.
        public void Dispose()
        {
            // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
            Dispose(true);
            GC.SuppressFinalize(this);
        }
        #endregion

    }
}

