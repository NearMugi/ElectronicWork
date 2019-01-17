﻿//MPU6050_6Axis_MotionApps20.hの中身

// I2Cdev library collection - MPU6050 I2C device class, 6-axis MotionApps 2.0 implementation
// Based on InvenSense MPU-6050 register map document rev. 2.0, 5/19/2011 (RM-MPU-6000A-00)
// 5/20/2013 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//
// Changelog:
//     ... - ongoing debug release

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

// MotionApps 2.0 DMP implementation, built using the MPU-6050EVB evaluation board
#define MPU6050_INCLUDE_DMP_MOTIONAPPS20

namespace MPU6050
{
    public partial class MPU6050
    {
        const uint MPU6050_DMP_CODE_SIZE = 1929;    // dmpMemory[]
        const uint MPU6050_DMP_CONFIG_SIZE = 192;     // dmpConfig[]
        const uint MPU6050_DMP_UPDATES_SIZE = 47;      // dmpUpdates[]

        /* ================================================================================================ *
         | Default MotionApps v2.0 42-byte FIFO packet structure:                                           |
         |                                                                                                  |
         | [QUAT W][      ][QUAT X][      ][QUAT Y][      ][QUAT Z][      ][GYRO X][      ][GYRO Y][      ] |
         |   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  |
         |                                                                                                  |
         | [GYRO Z][      ][ACC X ][      ][ACC Y ][      ][ACC Z ][      ][      ]                         |
         |  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41                          |
         * ================================================================================================ */

        // this block of memory gets written to the MPU on start-up, and it seems
        // to be volatile memory, so it has to be done each time (it only takes ~1
        // second though)
        byte[] dmpMemory = new byte[]{
            // bank 0, 256 bytes
            0xFB, 0x00, 0x00, 0x3E, 0x00, 0x0B, 0x00, 0x36, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00,
            0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0xFA, 0x80, 0x00, 0x0B, 0x12, 0x82, 0x00, 0x01,
            0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x28, 0x00, 0x00, 0xFF, 0xFF, 0x45, 0x81, 0xFF, 0xFF, 0xFA, 0x72, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x7F, 0xFF, 0xFF, 0xFE, 0x80, 0x01,
            0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x3E, 0x03, 0x30, 0x40, 0x00, 0x00, 0x00, 0x02, 0xCA, 0xE3, 0x09, 0x3E, 0x80, 0x00, 0x00,
            0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
            0x41, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x2A, 0x00, 0x00, 0x16, 0x55, 0x00, 0x00, 0x21, 0x82,
            0xFD, 0x87, 0x26, 0x50, 0xFD, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x05, 0x80, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
            0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x6F, 0x00, 0x02, 0x65, 0x32, 0x00, 0x00, 0x5E, 0xC0,
            0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0xFB, 0x8C, 0x6F, 0x5D, 0xFD, 0x5D, 0x08, 0xD9, 0x00, 0x7C, 0x73, 0x3B, 0x00, 0x6C, 0x12, 0xCC,
            0x32, 0x00, 0x13, 0x9D, 0x32, 0x00, 0xD0, 0xD6, 0x32, 0x00, 0x08, 0x00, 0x40, 0x00, 0x01, 0xF4,
            0xFF, 0xE6, 0x80, 0x79, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xD6, 0x00, 0x00, 0x27, 0x10,

            // bank 1, 256 bytes
            0xFB, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x00, 0x00, 0xFA, 0x36, 0xFF, 0xBC, 0x30, 0x8E, 0x00, 0x05, 0xFB, 0xF0, 0xFF, 0xD9, 0x5B, 0xC8,
            0xFF, 0xD0, 0x9A, 0xBE, 0x00, 0x00, 0x10, 0xA9, 0xFF, 0xF4, 0x1E, 0xB2, 0x00, 0xCE, 0xBB, 0xF7,
            0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x0C,
            0xFF, 0xC2, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xCF, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x14,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x03, 0x3F, 0x68, 0xB6, 0x79, 0x35, 0x28, 0xBC, 0xC6, 0x7E, 0xD1, 0x6C,
            0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x6A, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x30,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x25, 0x4D, 0x00, 0x2F, 0x70, 0x6D, 0x00, 0x00, 0x05, 0xAE, 0x00, 0x0C, 0x02, 0xD0,

            // bank 2, 256 bytes
            0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x01, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0xFF, 0xEF, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
            0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

            // bank 3, 256 bytes
            0xD8, 0xDC, 0xBA, 0xA2, 0xF1, 0xDE, 0xB2, 0xB8, 0xB4, 0xA8, 0x81, 0x91, 0xF7, 0x4A, 0x90, 0x7F,
            0x91, 0x6A, 0xF3, 0xF9, 0xDB, 0xA8, 0xF9, 0xB0, 0xBA, 0xA0, 0x80, 0xF2, 0xCE, 0x81, 0xF3, 0xC2,
            0xF1, 0xC1, 0xF2, 0xC3, 0xF3, 0xCC, 0xA2, 0xB2, 0x80, 0xF1, 0xC6, 0xD8, 0x80, 0xBA, 0xA7, 0xDF,
            0xDF, 0xDF, 0xF2, 0xA7, 0xC3, 0xCB, 0xC5, 0xB6, 0xF0, 0x87, 0xA2, 0x94, 0x24, 0x48, 0x70, 0x3C,
            0x95, 0x40, 0x68, 0x34, 0x58, 0x9B, 0x78, 0xA2, 0xF1, 0x83, 0x92, 0x2D, 0x55, 0x7D, 0xD8, 0xB1,
            0xB4, 0xB8, 0xA1, 0xD0, 0x91, 0x80, 0xF2, 0x70, 0xF3, 0x70, 0xF2, 0x7C, 0x80, 0xA8, 0xF1, 0x01,
            0xB0, 0x98, 0x87, 0xD9, 0x43, 0xD8, 0x86, 0xC9, 0x88, 0xBA, 0xA1, 0xF2, 0x0E, 0xB8, 0x97, 0x80,
            0xF1, 0xA9, 0xDF, 0xDF, 0xDF, 0xAA, 0xDF, 0xDF, 0xDF, 0xF2, 0xAA, 0xC5, 0xCD, 0xC7, 0xA9, 0x0C,
            0xC9, 0x2C, 0x97, 0x97, 0x97, 0x97, 0xF1, 0xA9, 0x89, 0x26, 0x46, 0x66, 0xB0, 0xB4, 0xBA, 0x80,
            0xAC, 0xDE, 0xF2, 0xCA, 0xF1, 0xB2, 0x8C, 0x02, 0xA9, 0xB6, 0x98, 0x00, 0x89, 0x0E, 0x16, 0x1E,
            0xB8, 0xA9, 0xB4, 0x99, 0x2C, 0x54, 0x7C, 0xB0, 0x8A, 0xA8, 0x96, 0x36, 0x56, 0x76, 0xF1, 0xB9,
            0xAF, 0xB4, 0xB0, 0x83, 0xC0, 0xB8, 0xA8, 0x97, 0x11, 0xB1, 0x8F, 0x98, 0xB9, 0xAF, 0xF0, 0x24,
            0x08, 0x44, 0x10, 0x64, 0x18, 0xF1, 0xA3, 0x29, 0x55, 0x7D, 0xAF, 0x83, 0xB5, 0x93, 0xAF, 0xF0,
            0x00, 0x28, 0x50, 0xF1, 0xA3, 0x86, 0x9F, 0x61, 0xA6, 0xDA, 0xDE, 0xDF, 0xD9, 0xFA, 0xA3, 0x86,
            0x96, 0xDB, 0x31, 0xA6, 0xD9, 0xF8, 0xDF, 0xBA, 0xA6, 0x8F, 0xC2, 0xC5, 0xC7, 0xB2, 0x8C, 0xC1,
            0xB8, 0xA2, 0xDF, 0xDF, 0xDF, 0xA3, 0xDF, 0xDF, 0xDF, 0xD8, 0xD8, 0xF1, 0xB8, 0xA8, 0xB2, 0x86,

            // bank 4, 256 bytes
            0xB4, 0x98, 0x0D, 0x35, 0x5D, 0xB8, 0xAA, 0x98, 0xB0, 0x87, 0x2D, 0x35, 0x3D, 0xB2, 0xB6, 0xBA,
            0xAF, 0x8C, 0x96, 0x19, 0x8F, 0x9F, 0xA7, 0x0E, 0x16, 0x1E, 0xB4, 0x9A, 0xB8, 0xAA, 0x87, 0x2C,
            0x54, 0x7C, 0xB9, 0xA3, 0xDE, 0xDF, 0xDF, 0xA3, 0xB1, 0x80, 0xF2, 0xC4, 0xCD, 0xC9, 0xF1, 0xB8,
            0xA9, 0xB4, 0x99, 0x83, 0x0D, 0x35, 0x5D, 0x89, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0xB5, 0x93, 0xA3,
            0x0E, 0x16, 0x1E, 0xA9, 0x2C, 0x54, 0x7C, 0xB8, 0xB4, 0xB0, 0xF1, 0x97, 0x83, 0xA8, 0x11, 0x84,
            0xA5, 0x09, 0x98, 0xA3, 0x83, 0xF0, 0xDA, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xD8, 0xF1, 0xA5,
            0x29, 0x55, 0x7D, 0xA5, 0x85, 0x95, 0x02, 0x1A, 0x2E, 0x3A, 0x56, 0x5A, 0x40, 0x48, 0xF9, 0xF3,
            0xA3, 0xD9, 0xF8, 0xF0, 0x98, 0x83, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0x97, 0x82, 0xA8, 0xF1,
            0x11, 0xF0, 0x98, 0xA2, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xDA, 0xF3, 0xDE, 0xD8, 0x83, 0xA5,
            0x94, 0x01, 0xD9, 0xA3, 0x02, 0xF1, 0xA2, 0xC3, 0xC5, 0xC7, 0xD8, 0xF1, 0x84, 0x92, 0xA2, 0x4D,
            0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
            0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0x93, 0xA3, 0x4D,
            0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
            0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0xA8, 0x8A, 0x9A,
            0xF0, 0x28, 0x50, 0x78, 0x9E, 0xF3, 0x88, 0x18, 0xF1, 0x9F, 0x1D, 0x98, 0xA8, 0xD9, 0x08, 0xD8,
            0xC8, 0x9F, 0x12, 0x9E, 0xF3, 0x15, 0xA8, 0xDA, 0x12, 0x10, 0xD8, 0xF1, 0xAF, 0xC8, 0x97, 0x87,

            // bank 5, 256 bytes
            0x34, 0xB5, 0xB9, 0x94, 0xA4, 0x21, 0xF3, 0xD9, 0x22, 0xD8, 0xF2, 0x2D, 0xF3, 0xD9, 0x2A, 0xD8,
            0xF2, 0x35, 0xF3, 0xD9, 0x32, 0xD8, 0x81, 0xA4, 0x60, 0x60, 0x61, 0xD9, 0x61, 0xD8, 0x6C, 0x68,
            0x69, 0xD9, 0x69, 0xD8, 0x74, 0x70, 0x71, 0xD9, 0x71, 0xD8, 0xB1, 0xA3, 0x84, 0x19, 0x3D, 0x5D,
            0xA3, 0x83, 0x1A, 0x3E, 0x5E, 0x93, 0x10, 0x30, 0x81, 0x10, 0x11, 0xB8, 0xB0, 0xAF, 0x8F, 0x94,
            0xF2, 0xDA, 0x3E, 0xD8, 0xB4, 0x9A, 0xA8, 0x87, 0x29, 0xDA, 0xF8, 0xD8, 0x87, 0x9A, 0x35, 0xDA,
            0xF8, 0xD8, 0x87, 0x9A, 0x3D, 0xDA, 0xF8, 0xD8, 0xB1, 0xB9, 0xA4, 0x98, 0x85, 0x02, 0x2E, 0x56,
            0xA5, 0x81, 0x00, 0x0C, 0x14, 0xA3, 0x97, 0xB0, 0x8A, 0xF1, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9,
            0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x84, 0x0D, 0xDA, 0x0E, 0xD8, 0xA3, 0x29, 0x83, 0xDA,
            0x2C, 0x0E, 0xD8, 0xA3, 0x84, 0x49, 0x83, 0xDA, 0x2C, 0x4C, 0x0E, 0xD8, 0xB8, 0xB0, 0xA8, 0x8A,
            0x9A, 0xF5, 0x20, 0xAA, 0xDA, 0xDF, 0xD8, 0xA8, 0x40, 0xAA, 0xD0, 0xDA, 0xDE, 0xD8, 0xA8, 0x60,
            0xAA, 0xDA, 0xD0, 0xDF, 0xD8, 0xF1, 0x97, 0x86, 0xA8, 0x31, 0x9B, 0x06, 0x99, 0x07, 0xAB, 0x97,
            0x28, 0x88, 0x9B, 0xF0, 0x0C, 0x20, 0x14, 0x40, 0xB8, 0xB0, 0xB4, 0xA8, 0x8C, 0x9C, 0xF0, 0x04,
            0x28, 0x51, 0x79, 0x1D, 0x30, 0x14, 0x38, 0xB2, 0x82, 0xAB, 0xD0, 0x98, 0x2C, 0x50, 0x50, 0x78,
            0x78, 0x9B, 0xF1, 0x1A, 0xB0, 0xF0, 0x8A, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x8B, 0x29, 0x51, 0x79,
            0x8A, 0x24, 0x70, 0x59, 0x8B, 0x20, 0x58, 0x71, 0x8A, 0x44, 0x69, 0x38, 0x8B, 0x39, 0x40, 0x68,
            0x8A, 0x64, 0x48, 0x31, 0x8B, 0x30, 0x49, 0x60, 0xA5, 0x88, 0x20, 0x09, 0x71, 0x58, 0x44, 0x68,

            // bank 6, 256 bytes
            0x11, 0x39, 0x64, 0x49, 0x30, 0x19, 0xF1, 0xAC, 0x00, 0x2C, 0x54, 0x7C, 0xF0, 0x8C, 0xA8, 0x04,
            0x28, 0x50, 0x78, 0xF1, 0x88, 0x97, 0x26, 0xA8, 0x59, 0x98, 0xAC, 0x8C, 0x02, 0x26, 0x46, 0x66,
            0xF0, 0x89, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x24, 0x70, 0x59, 0x44, 0x69, 0x38, 0x64, 0x48, 0x31,
            0xA9, 0x88, 0x09, 0x20, 0x59, 0x70, 0xAB, 0x11, 0x38, 0x40, 0x69, 0xA8, 0x19, 0x31, 0x48, 0x60,
            0x8C, 0xA8, 0x3C, 0x41, 0x5C, 0x20, 0x7C, 0x00, 0xF1, 0x87, 0x98, 0x19, 0x86, 0xA8, 0x6E, 0x76,
            0x7E, 0xA9, 0x99, 0x88, 0x2D, 0x55, 0x7D, 0x9E, 0xB9, 0xA3, 0x8A, 0x22, 0x8A, 0x6E, 0x8A, 0x56,
            0x8A, 0x5E, 0x9F, 0xB1, 0x83, 0x06, 0x26, 0x46, 0x66, 0x0E, 0x2E, 0x4E, 0x6E, 0x9D, 0xB8, 0xAD,
            0x00, 0x2C, 0x54, 0x7C, 0xF2, 0xB1, 0x8C, 0xB4, 0x99, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0x81, 0x91,
            0xAC, 0x38, 0xAD, 0x3A, 0xB5, 0x83, 0x91, 0xAC, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9, 0x48, 0xD8,
            0x6D, 0xD9, 0x68, 0xD8, 0x8C, 0x9D, 0xAE, 0x29, 0xD9, 0x04, 0xAE, 0xD8, 0x51, 0xD9, 0x04, 0xAE,
            0xD8, 0x79, 0xD9, 0x04, 0xD8, 0x81, 0xF3, 0x9D, 0xAD, 0x00, 0x8D, 0xAE, 0x19, 0x81, 0xAD, 0xD9,
            0x01, 0xD8, 0xF2, 0xAE, 0xDA, 0x26, 0xD8, 0x8E, 0x91, 0x29, 0x83, 0xA7, 0xD9, 0xAD, 0xAD, 0xAD,
            0xAD, 0xF3, 0x2A, 0xD8, 0xD8, 0xF1, 0xB0, 0xAC, 0x89, 0x91, 0x3E, 0x5E, 0x76, 0xF3, 0xAC, 0x2E,
            0x2E, 0xF1, 0xB1, 0x8C, 0x5A, 0x9C, 0xAC, 0x2C, 0x28, 0x28, 0x28, 0x9C, 0xAC, 0x30, 0x18, 0xA8,
            0x98, 0x81, 0x28, 0x34, 0x3C, 0x97, 0x24, 0xA7, 0x28, 0x34, 0x3C, 0x9C, 0x24, 0xF2, 0xB0, 0x89,
            0xAC, 0x91, 0x2C, 0x4C, 0x6C, 0x8A, 0x9B, 0x2D, 0xD9, 0xD8, 0xD8, 0x51, 0xD9, 0xD8, 0xD8, 0x79,

            // bank 7, 138 bytes (remainder)
            0xD9, 0xD8, 0xD8, 0xF1, 0x9E, 0x88, 0xA3, 0x31, 0xDA, 0xD8, 0xD8, 0x91, 0x2D, 0xD9, 0x28, 0xD8,
            0x4D, 0xD9, 0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x83, 0x93, 0x35, 0x3D, 0x80, 0x25, 0xDA,
            0xD8, 0xD8, 0x85, 0x69, 0xDA, 0xD8, 0xD8, 0xB4, 0x93, 0x81, 0xA3, 0x28, 0x34, 0x3C, 0xF3, 0xAB,
            0x8B, 0xF8, 0xA3, 0x91, 0xB6, 0x09, 0xB4, 0xD9, 0xAB, 0xDE, 0xFA, 0xB0, 0x87, 0x9C, 0xB9, 0xA3,
            0xDD, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x95, 0xF1, 0xA3, 0xA3, 0xA3, 0x9D, 0xF1, 0xA3, 0xA3, 0xA3,
            0xA3, 0xF2, 0xA3, 0xB4, 0x90, 0x80, 0xF2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3,
            0xA3, 0xB2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xB0, 0x87, 0xB5, 0x99, 0xF1, 0xA3, 0xA3, 0xA3,
            0x98, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x97, 0xA3, 0xA3, 0xA3, 0xA3, 0xF3, 0x9B, 0xA3, 0xA3, 0xDC,
            0xB9, 0xA7, 0xF1, 0x26, 0x26, 0x26, 0xD8, 0xD8, 0xFF
        };

        // thanks to Noah Zerkin for piecing this stuff together!
        byte[] dmpConfig = new byte[]{
        //  BANK    OFFSET  LENGTH  [DATA]
            0x03,   0x7B,   0x03,   0x4C, 0xCD, 0x6C,         // FCFG_1 inv_set_gyro_calibration
            0x03,   0xAB,   0x03,   0x36, 0x56, 0x76,         // FCFG_3 inv_set_gyro_calibration
            0x00,   0x68,   0x04,   0x02, 0xCB, 0x47, 0xA2,   // D_0_104 inv_set_gyro_calibration
            0x02,   0x18,   0x04,   0x00, 0x05, 0x8B, 0xC1,   // D_0_24 inv_set_gyro_calibration
            0x01,   0x0C,   0x04,   0x00, 0x00, 0x00, 0x00,   // D_1_152 inv_set_accel_calibration
            0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_accel_calibration
            0x03,   0x89,   0x03,   0x26, 0x46, 0x66,         // FCFG_7 inv_set_accel_calibration
            0x00,   0x6C,   0x02,   0x20, 0x00,               // D_0_108 inv_set_accel_calibration
            0x02,   0x40,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_00 inv_set_compass_calibration
            0x02,   0x44,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_01
            0x02,   0x48,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_02
            0x02,   0x4C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_10
            0x02,   0x50,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_11
            0x02,   0x54,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_12
            0x02,   0x58,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_20
            0x02,   0x5C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_21
            0x02,   0xBC,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_22
            0x01,   0xEC,   0x04,   0x00, 0x00, 0x40, 0x00,   // D_1_236 inv_apply_endian_accel
            0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_mpu_sensors
            0x04,   0x02,   0x03,   0x0D, 0x35, 0x5D,         // CFG_MOTION_BIAS inv_turn_on_bias_from_no_motion
            0x04,   0x09,   0x04,   0x87, 0x2D, 0x35, 0x3D,   // FCFG_5 inv_set_bias_update
            0x00,   0xA3,   0x01,   0x00,                     // D_0_163 inv_set_dead_zone
                         // SPECIAL 0x01 = enable interrupts
            0x00,   0x00,   0x00,   0x01, // SET INT_ENABLE at i=22, SPECIAL INSTRUCTION
            0x07,   0x86,   0x01,   0xFE,                     // CFG_6 inv_set_fifo_interupt
            0x07,   0x41,   0x05,   0xF1, 0x20, 0x28, 0x30, 0x38, // CFG_8 inv_send_quaternion
            0x07,   0x7E,   0x01,   0x30,                     // CFG_16 inv_set_footer
            0x07,   0x46,   0x01,   0x9A,                     // CFG_GYRO_SOURCE inv_send_gyro
            0x07,   0x47,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_9 inv_send_gyro -> inv_construct3_fifo
            0x07,   0x6C,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_12 inv_send_accel -> inv_construct3_fifo
            0x02,   0x16,   0x02,   0x00, 0x01                // D_0_22 inv_set_fifo_rate

            // This very last 0x01 WAS a 0x09, which drops the FIFO rate down to 20 Hz. 0x07 is 25 Hz,
            // 0x01 is 100Hz. Going faster than 100Hz (0x00=200Hz) tends to result in very noisy data.
            // DMP output frequency is calculated easily using this equation: (200Hz / (1 + value))

            // It is important to make sure the host processor can keep up with reading and processing
            // the FIFO output at the desired rate. Handling FIFO overflow cleanly is also a good idea.
        };

        byte[] dmpUpdates = new byte[]{
            0x01,   0xB2,   0x02,   0xFF, 0xFF,
            0x01,   0x90,   0x04,   0x09, 0x23, 0xA1, 0x35,
            0x01,   0x6A,   0x02,   0x06, 0x00,
            0x01,   0x60,   0x08,   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00,   0x60,   0x04,   0x40, 0x00, 0x00, 0x00,
            0x01,   0x62,   0x02,   0x00, 0x00,
            0x00,   0x60,   0x04,   0x00, 0x40, 0x00, 0x00
        };

        byte dmpInitialize()
        {
            // reset device
            //DEBUG_PRINTLN(F("\n\nResetting MPU6050..."));
            reset();

            //待ち
            //delay(30); // wait after reset

            // enable sleep mode and wake cycle
            /*Serial.println(F("Enabling sleep mode..."));
            setSleepEnabled(true);
            Serial.println(F("Enabling wake cycle..."));
            setWakeCycleEnabled(true);*/

            // disable sleep mode
            //DEBUG_PRINTLN(F("Disabling sleep mode..."));
            setSleepEnabled(false);

            // get MPU hardware revision
            //DEBUG_PRINTLN(F("Selecting user bank 16..."));
            setMemoryBank(0x10, true, true);
            //DEBUG_PRINTLN(F("Selecting memory byte 6..."));
            setMemoryStartAddress(0x06);
            //DEBUG_PRINTLN(F("Checking hardware revision..."));
            //DEBUG_PRINT(F("Revision @ user[16][6] = "));
            //DEBUG_PRINTLNF(readMemoryByte(), HEX);
            //DEBUG_PRINTLN(F("Resetting memory bank selection to 0..."));
            setMemoryBank(0, false, false);

            // check OTP bank valid
            //DEBUG_PRINTLN(F("Reading OTP bank valid flag..."));
            //DEBUG_PRINT(F("OTP bank is "));
            //DEBUG_PRINTLN(getOTPBankValid() ? F("valid!") : F("invalid!"));

            // get X/Y/Z gyro offsets
            //DEBUG_PRINTLN(F("Reading gyro offset TC values..."));
            int xgOffsetTC = getXGyroOffsetTC();
            int ygOffsetTC = getYGyroOffsetTC();
            int zgOffsetTC = getZGyroOffsetTC();
            //DEBUG_PRINT(F("X gyro offset = "));
            //DEBUG_PRINTLN(xgOffsetTC);
            //DEBUG_PRINT(F("Y gyro offset = "));
            //DEBUG_PRINTLN(ygOffsetTC);
            //DEBUG_PRINT(F("Z gyro offset = "));
            //DEBUG_PRINTLN(zgOffsetTC);

            // setup weird slave stuff (?)
            //DEBUG_PRINTLN(F("Setting slave 0 address to 0x7F..."));
            setSlaveAddress(0, 0x7F);
            //DEBUG_PRINTLN(F("Disabling I2C Master mode..."));
            setI2CMasterModeEnabled(false);
            //DEBUG_PRINTLN(F("Setting slave 0 address to 0x68 (self)..."));
            setSlaveAddress(0, 0x68);
            //DEBUG_PRINTLN(F("Resetting I2C Master control..."));
            resetI2CMaster();

            //待ち
            //delay(20);

            // load DMP code into memory banks
            //DEBUG_PRINT(F("Writing DMP code to MPU memory banks ("));
            //DEBUG_PRINT(MPU6050_DMP_CODE_SIZE);
            //DEBUG_PRINTLN(F(" bytes)"));
            if (writeProgMemoryBlock(dmpMemory, MPU6050_DMP_CODE_SIZE))
            {
                //DEBUG_PRINTLN(F("Success! DMP code written and verified."));

                // write DMP configuration
                //DEBUG_PRINT(F("Writing DMP configuration to MPU memory banks ("));
                //DEBUG_PRINT(MPU6050_DMP_CONFIG_SIZE);
                //DEBUG_PRINTLN(F(" bytes in config def)"));
                if (writeProgDMPConfigurationSet(dmpConfig, MPU6050_DMP_CONFIG_SIZE))
                {
                    //DEBUG_PRINTLN(F("Success! DMP configuration written and verified."));

                    //DEBUG_PRINTLN(F("Setting clock source to Z Gyro..."));
                    setClockSource(MPU6050_CLOCK_PLL_ZGYRO);

                    //DEBUG_PRINTLN(F("Setting DMP and FIFO_OFLOW interrupts enabled..."));
                    setIntEnabled(0x12);

                    //DEBUG_PRINTLN(F("Setting sample rate to 200Hz..."));
                    setRate(4); // 1khz / (1 + 4) = 200 Hz

                    //DEBUG_PRINTLN(F("Setting external frame sync to TEMP_OUT_L[0]..."));
                    setExternalFrameSync(MPU6050_EXT_SYNC_TEMP_OUT_L);

                    //DEBUG_PRINTLN(F("Setting DLPF bandwidth to 42Hz..."));
                    setDLPFMode(MPU6050_DLPF_BW_42);

                    //DEBUG_PRINTLN(F("Setting gyro sensitivity to +/- 2000 deg/sec..."));
                    setFullScaleGyroRange(MPU6050_GYRO_FS_2000);

                    //DEBUG_PRINTLN(F("Setting DMP programm start address"));
                    //write start address MSB into register
                    setDMPConfig1(0x03);
                    //write start address LSB into register
                    setDMPConfig2(0x00);

                    //DEBUG_PRINTLN(F("Clearing OTP Bank flag..."));
                    setOTPBankValid(false);

                    //DEBUG_PRINTLN(F("Setting X/Y/Z gyro offset TCs to previous values..."));
                    setXGyroOffsetTC(xgOffsetTC);
                    setYGyroOffsetTC(ygOffsetTC);
                    setZGyroOffsetTC(zgOffsetTC);

                    ////DEBUG_PRINTLN(F("Setting X/Y/Z gyro user offsets to zero..."));
                    //setXGyroOffset(0);
                    //setYGyroOffset(0);
                    //setZGyroOffset(0);

                    //DEBUG_PRINTLN(F("Writing final memory update 1/7 (function unknown)..."));
                    byte[] dmpUpdate = new byte[16];
                    byte j;
                    uint pos = 0;
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Writing final memory update 2/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Resetting FIFO..."));
                    resetFIFO();

                    //DEBUG_PRINTLN(F("Reading FIFO count..."));
                    uint fifoCount = getFIFOCount();
                    byte[] fifoBuffer = new byte[128];

                    //DEBUG_PRINT(F("Current FIFO count="));
                    //DEBUG_PRINTLN(fifoCount);
                    getFIFOBytes(ref fifoBuffer, fifoCount);

                    //DEBUG_PRINTLN(F("Setting motion detection threshold to 2..."));
                    setMotionDetectionThreshold(2);

                    //DEBUG_PRINTLN(F("Setting zero-motion detection threshold to 156..."));
                    setZeroMotionDetectionThreshold(156);

                    //DEBUG_PRINTLN(F("Setting motion detection duration to 80..."));
                    setMotionDetectionDuration(80);

                    //DEBUG_PRINTLN(F("Setting zero-motion detection duration to 0..."));
                    setZeroMotionDetectionDuration(0);

                    //DEBUG_PRINTLN(F("Resetting FIFO..."));
                    resetFIFO();

                    //DEBUG_PRINTLN(F("Enabling FIFO..."));
                    setFIFOEnabled(true);

                    //DEBUG_PRINTLN(F("Enabling DMP..."));
                    setDMPEnabled(true);

                    //DEBUG_PRINTLN(F("Resetting DMP..."));
                    resetDMP();

                    //DEBUG_PRINTLN(F("Writing final memory update 3/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Writing final memory update 4/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Writing final memory update 5/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Waiting for FIFO count > 2..."));
                    while ((fifoCount = getFIFOCount()) < 3) ;

                    //DEBUG_PRINT(F("Current FIFO count="));
                    //DEBUG_PRINTLN(fifoCount);
                    //DEBUG_PRINTLN(F("Reading FIFO data..."));
                    getFIFOBytes(fifoBuffer, fifoCount);

                    //DEBUG_PRINTLN(F("Reading interrupt status..."));

                    //DEBUG_PRINT(F("Current interrupt status="));
                    //DEBUG_PRINTLNF(getIntStatus(), HEX);

                    //DEBUG_PRINTLN(F("Reading final memory update 6/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    readMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("Waiting for FIFO count > 2..."));
                    while ((fifoCount = getFIFOCount()) < 3) ;

                    //DEBUG_PRINT(F("Current FIFO count="));
                    //DEBUG_PRINTLN(fifoCount);

                    //DEBUG_PRINTLN(F("Reading FIFO data..."));
                    getFIFOBytes(fifoBuffer, fifoCount);

                    //DEBUG_PRINTLN(F("Reading interrupt status..."));

                    //DEBUG_PRINT(F("Current interrupt status="));
                    //DEBUG_PRINTLNF(getIntStatus(), HEX);

                    //DEBUG_PRINTLN(F("Writing final memory update 7/7 (function unknown)..."));
                    for (j = 0; j < 4 || j < dmpUpdate[2] + 3; j++, pos++) dmpUpdate[j] = pgm_read_byte(&dmpUpdates[pos]);
                    writeMemoryBlock(dmpUpdate + 3, dmpUpdate[2], dmpUpdate[0], dmpUpdate[1]);

                    //DEBUG_PRINTLN(F("DMP is good to go! Finally."));

                    //DEBUG_PRINTLN(F("Disabling DMP (you turn it on later)..."));
                    setDMPEnabled(false);

                    //DEBUG_PRINTLN(F("Setting up internal 42-byte (default) DMP packet buffer..."));
                    dmpPacketSize = 42;
                    /*if ((dmpPacketBuffer = (byte *)malloc(42)) == 0) {
                        return 3; // TODO: proper error code for no memory
                    }*/

                    //DEBUG_PRINTLN(F("Resetting FIFO and clearing INT status one last time..."));
                    resetFIFO();
                    getIntStatus();
                }
                else
                {
                    //DEBUG_PRINTLN(F("ERROR! DMP configuration verification failed."));
                    return 2; // configuration block loading failed
                }
            }
            else
            {
                //DEBUG_PRINTLN(F("ERROR! DMP code verification failed."));
                return 1; // main binary block loading failed
            }
            return 0; // success
        }

        bool dmpPacketAvailable()
        {
            return getFIFOCount() >= dmpGetFIFOPacketSize();
        }

        //使用する
        byte dmpGetAccel(int* data, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            data[0] = (((uint32_t) packet[28] << 24) | ((uint32_t) packet[29] << 16) | ((uint32_t) packet[30] << 8) | packet[31]);
            data[1] = (((uint32_t) packet[32] << 24) | ((uint32_t) packet[33] << 16) | ((uint32_t) packet[34] << 8) | packet[35]);
            data[2] = (((uint32_t) packet[36] << 24) | ((uint32_t) packet[37] << 16) | ((uint32_t) packet[38] << 8) | packet[39]);
            return 0;
        }


        byte dmpGetAccel(int* data, const byte* packet)
            {
                // TODO: accommodate different arrangements of sent data (ONLY default supported now)
                if (packet == 0) packet = dmpPacketBuffer;
                data[0] = (packet[28] << 8) | packet[29];
                data[1] = (packet[32] << 8) | packet[33];
                data[2] = (packet[36] << 8) | packet[37];
                return 0;
            }

        byte dmpGetAccel(VectorInt16* v, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            v->x = (packet[28] << 8) | packet[29];
            v->y = (packet[32] << 8) | packet[33];
            v->z = (packet[36] << 8) | packet[37];
            return 0;
        }

        byte dmpGetQuaternion(int32_t* data, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            data[0] = (((uint32_t)packet[0] << 24) | ((uint32_t)packet[1] << 16) | ((uint32_t)packet[2] << 8) | packet[3]);
            data[1] = (((uint32_t)packet[4] << 24) | ((uint32_t)packet[5] << 16) | ((uint32_t)packet[6] << 8) | packet[7]);
            data[2] = (((uint32_t)packet[8] << 24) | ((uint32_t)packet[9] << 16) | ((uint32_t)packet[10] << 8) | packet[11]);
            data[3] = (((uint32_t)packet[12] << 24) | ((uint32_t)packet[13] << 16) | ((uint32_t)packet[14] << 8) | packet[15]);
            return 0;
        }

        byte dmpGetQuaternion(int* data, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            data[0] = ((packet[0] << 8) | packet[1]);
            data[1] = ((packet[4] << 8) | packet[5]);
            data[2] = ((packet[8] << 8) | packet[9]);
            data[3] = ((packet[12] << 8) | packet[13]);
            return 0;
        }

        byte dmpGetQuaternion(Quaternion* q, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            int qI[4];
            byte status = dmpGetQuaternion(qI, packet);
            if (status == 0)
            {
                q->w = (float)qI[0] / 16384.0f;
                q->x = (float)qI[1] / 16384.0f;
                q->y = (float)qI[2] / 16384.0f;
                q->z = (float)qI[3] / 16384.0f;
                return 0;
            }
            return status; // int16 return value, indicates error if this line is reached
        }

        byte dmpGetGyro(int32_t* data, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            data[0] = (((uint32_t)packet[16] << 24) | ((uint32_t)packet[17] << 16) | ((uint32_t)packet[18] << 8) | packet[19]);
            data[1] = (((uint32_t)packet[20] << 24) | ((uint32_t)packet[21] << 16) | ((uint32_t)packet[22] << 8) | packet[23]);
            data[2] = (((uint32_t)packet[24] << 24) | ((uint32_t)packet[25] << 16) | ((uint32_t)packet[26] << 8) | packet[27]);
            return 0;
        }

        byte dmpGetGyro(int* data, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            data[0] = (packet[16] << 8) | packet[17];
            data[1] = (packet[20] << 8) | packet[21];
            data[2] = (packet[24] << 8) | packet[25];
            return 0;
        }

        byte dmpGetGyro(VectorInt16* v, const byte* packet)
        {
            // TODO: accommodate different arrangements of sent data (ONLY default supported now)
            if (packet == 0) packet = dmpPacketBuffer;
            v->x = (packet[16] << 8) | packet[17];
            v->y = (packet[20] << 8) | packet[21];
            v->z = (packet[24] << 8) | packet[25];
            return 0;
        }

        byte dmpGetLinearAccel(VectorInt16* v, VectorInt16* vRaw, VectorFloat* gravity)
        {
            // get rid of the gravity component (+1g = +8192 in standard DMP FIFO packet, sensitivity is 2g)
            v->x = vRaw->x - gravity->x * 8192;
            v->y = vRaw->y - gravity->y * 8192;
            v->z = vRaw->z - gravity->z * 8192;
            return 0;
        }

        byte dmpGetLinearAccelInWorld(VectorInt16* v, VectorInt16* vReal, Quaternion* q)
        {
            // rotate measured 3D acceleration vector into original state
            // frame of reference based on orientation quaternion
            memcpy(v, vReal, sizeof(VectorInt16));
            v->rotate(q);
            return 0;
        }

        //使用する
        byte dmpGetGravity(VectorFloat* v, Quaternion* q)
        {
            v->x = 2 * (q->x * q->z - q->w * q->y);
            v->y = 2 * (q->w * q->x + q->y * q->z);
            v->z = q->w * q->w - q->x * q->x - q->y * q->y + q->z * q->z;
            return 0;
        }

        byte dmpGetEuler(float* data, Quaternion* q)
        {
            data[0] = atan2(2 * q->x * q->y - 2 * q->w * q->z, 2 * q->w * q->w + 2 * q->x * q->x - 1);   // psi
            data[1] = -asin(2 * q->x * q->z + 2 * q->w * q->y);                              // theta
            data[2] = atan2(2 * q->y * q->z - 2 * q->w * q->x, 2 * q->w * q->w + 2 * q->z * q->z - 1);   // phi
            return 0;
        }
        byte dmpGetYawPitchRoll(float* data, Quaternion* q, VectorFloat* gravity)
        {
            // yaw: (about Z axis)
            data[0] = atan2(2 * q->x * q->y - 2 * q->w * q->z, 2 * q->w * q->w + 2 * q->x * q->x - 1);
            // pitch: (nose up/down, about Y axis)
            data[1] = atan(gravity->x / sqrt(gravity->y * gravity->y + gravity->z * gravity->z));
            // roll: (tilt left/right, about X axis)
            data[2] = atan(gravity->y / sqrt(gravity->x * gravity->x + gravity->z * gravity->z));
            return 0;
        }
    
        byte dmpProcessFIFOPacket(const unsigned char* dmpData)
        {
            return 0;
        }

        byte dmpReadAndProcessFIFOPacket(byte numPackets, byte* processed)
        {
            byte status;
            byte[] buf = new byte[dmpPacketSize];
            for (byte i = 0; i < numPackets; i++)
            {
                // read packet from FIFO
                getFIFOBytes(buf, dmpPacketSize);

                // process packet
                if ((status = dmpProcessFIFOPacket(buf)) > 0) return status;

                // increment external process count variable, if supplied
                if (processed != 0) (*processed)++;
            }
            return 0;
        }
    
        //使用する
        byte dmpGetFIFOPacketSize()
        {
            return dmpPacketSize;
        }


    }
}


