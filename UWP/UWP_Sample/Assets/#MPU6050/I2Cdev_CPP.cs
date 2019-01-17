
// I2Cdev library collection - Main I2C device class
// Abstracts bit and byte I2C R/W functions into a convenient class
// 2013-06-05 by Jeff Rowberg <jeff@rowberg.net>
//
// Changelog:
//      2013-05-06 - add Francesco Ferrara's Fastwire v0.24 implementation with small modifications
//      2013-05-05 - fix issue with writing bit values to words (Sasquatch/Farzanegan)
//      2012-06-09 - fix major issue with reading > 32 bytes at a time with Arduino Wire
//                 - add compiler warnings when using outdated or IDE or limited I2Cdev implementation
//      2011-11-01 - fix write*Bits mask calculation (thanks sasquatch @ Arduino forums)
//      2011-10-03 - added automatic Arduino version detection for ease of use
//      2011-10-02 - added Gene Knight's NBWire TwoWire class implementation with small modifications
//      2011-08-31 - added support for Arduino 1.0 Wire library (methods are different from 0.x)
//      2011-08-03 - added optional timeout parameter to read* methods to easily change from default
//      2011-08-02 - added support for 16-bit registers
//                 - fixed incorrect Doxygen comments on some methods
//                 - added timeout value for read operations (thanks mem @ Arduino forums)
//      2011-07-30 - changed read/write function structures to return success or byte counts
//                 - made all methods static for multi-device memory savings
//      2011-07-28 - initial release

/* ============================================
I2Cdev device library code is placed under the MIT license
Copyright (c) 2013 Jeff Rowberg

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

//I2Cdev.cpp
//使うものだけ抜粋
// readBit
// readBits
// readByte
// readBytes
// writeBit
// writeBits
// writeByte
// writeBytes
// writeWord

namespace MPU6050
{
    public partial class MPU6050
    {
        int timeout = 1000; //(ms) I2CDEV_DEFAULT_READ_TIMEOUT;

        int readBit(byte devAddr, byte regAddr, byte bitNum, ref byte data)
        {
            byte b = 0;
            int count = readByte(devAddr, regAddr, ref b);
            data = (byte)((int)b & (1 << (int)bitNum));
            return count;
        }

        int readBits(byte devAddr, byte regAddr, byte bitStart, byte length, ref byte data)
        {
            // 01101001 read byte
            // 76543210 bit numbers
            //    xxx   args: bitStart=4, length=3
            //    010   masked
            //   -> 010 shifted
            int count;
            byte b = 0;
            if ((count = readByte(devAddr, regAddr, ref b)) != 0)
            {
                byte mask = (byte)(((1 << length) - 1) << (bitStart - length + 1));
                b &= mask;
                b >>= (bitStart - length + 1);
                data = b;
            }
            return count;
        }

        int readByte(byte devAddr, byte regAddr, ref byte data)
        {
            return readBytes(devAddr, regAddr, 1, ref data);
        }

        int readBytes(byte devAddr, byte regAddr, byte length, ref byte data)
        {

            int count = 0;


            //I2Cからデータを取得する処理を追加


            return count;
        }


        bool writeBit(byte devAddr, byte regAddr, byte bitNum, byte data)
        {
            byte b = 0;
            readByte(devAddr, regAddr, ref b);
            if (data != 0)
            {
                b = (byte)(b | (1 << bitNum));
            }
            else
            {
                b = (byte)(b & ~(1 << bitNum));
            }
            return writeByte(devAddr, regAddr, b);
        }

        bool writeBits(byte devAddr, byte regAddr, byte bitStart, byte length, byte data)
        {

            byte b = 0;
            if (readByte(devAddr, regAddr, ref b) != 0)
            {
                byte mask = (byte)(((1 << length) - 1) << (bitStart - length + 1));
                data <<= (bitStart - length + 1); // shift data into correct position
                data &= mask; // zero all non-important bits in data
                b &= (byte)(~(mask)); // zero all important bits in existing byte
                b |= data; // combine data with existing byte
                return writeByte(devAddr, regAddr, b);
            }
            else
            {
                return false;
            }
        }

        bool writeByte(byte devAddr, byte regAddr, byte data)
        {
            return writeBytes(devAddr, regAddr, 1, ref data);
        }

        bool writeWord(byte devAddr, byte regAddr, int data)
        {
            return writeWords(devAddr, regAddr, 1, ref data);
        }

        bool writeBytes(byte devAddr, byte regAddr, byte length, ref byte data)
        {
            byte status = 0;

            //I2Cでデータを送る処理を追加

            return status == 0;
        }

        bool writeWords(byte devAddr, byte regAddr, byte length, ref int data)
        {
            byte status = 0;
            
            //I2Cでデータを送る処理を追加

            return status == 0;
        }
    }
}
