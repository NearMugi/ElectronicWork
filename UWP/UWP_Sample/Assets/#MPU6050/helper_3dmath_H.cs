//helper_3dmath.hの中身

// I2C device class (I2Cdev) demonstration Arduino sketch for MPU6050 class, 3D math helper
// 6/5/2012 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//
// Changelog:
//     2012-06-05 - add 3D math helper file to DMP6 example sketch

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

namespace MPU6050
{
    public partial class MPU6050
    {
        public class Quaternion
        {
            public float w;
            public float x;
            public float y;
            public float z;

            public Quaternion()
            {
                w = 1.0f;
                x = 0.0f;
                y = 0.0f;
                z = 0.0f;
            }

            public Quaternion(float nw, float nx, float ny, float nz)
            {
                w = nw;
                x = nx;
                y = ny;
                z = nz;
            }

            public Quaternion getProduct(Quaternion q)
            {
                // Quaternion multiplication is defined by:
                //     (Q1 * Q2).w = (w1w2 - x1x2 - y1y2 - z1z2)
                //     (Q1 * Q2).x = (w1x2 + x1w2 + y1z2 - z1y2)
                //     (Q1 * Q2).y = (w1y2 - x1z2 + y1w2 + z1x2)
                //     (Q1 * Q2).z = (w1z2 + x1y2 - y1x2 + z1w2

                Quaternion _q = new Quaternion(
                    w * q.w - x * q.x - y * q.y - z * q.z,  // new w
                    w * q.x + x * q.w + y * q.z - z * q.y,  // new x
                    w * q.y - x * q.z + y * q.w + z * q.x,  // new y
                    w * q.z + x * q.y - y * q.x + z * q.w); // new z
                return _q;

            }

            public Quaternion getConjugate()
            {
                Quaternion _q = new Quaternion(w, -x, -y, -z);
                return _q;
            }

            public float getMagnitude()
            {
                return (float)Math.Sqrt(w * w + x * x + y * y + z * z);
            }

            public void normalize()
            {
                float m = getMagnitude();
                w /= m;
                x /= m;
                y /= m;
                z /= m;
            }

            public Quaternion getNormalized()
            {
                Quaternion r = new Quaternion(w, x, y, z);
                r.normalize();
                return r;
            }
        };

        public class VectorInt16
        {
            public int x;
            public int y;
            public int z;

            public VectorInt16()
            {
                x = 0;
                y = 0;
                z = 0;
            }

            public VectorInt16(int nx, int ny, int nz)
            {
                x = nx;
                y = ny;
                z = nz;
            }

            public float getMagnitude()
            {
                return (float)Math.Sqrt(x * x + y * y + z * z);
            }

            public void normalize()
            {
                float m = getMagnitude();
                x = (int)(x / m);
                y = (int)(y / m);
                z = (int)(z / m);
            }

            public VectorInt16 getNormalized()
            {
                VectorInt16 r = new VectorInt16(x, y, z);
                r.normalize();
                return r;
            }

            public void rotate(ref Quaternion q)
            {
                // http://www.cprogramming.com/tutorial/3d/quaternions.html
                // http://www.euclideanspace.com/maths/algebra/realNormedAlgebra/quaternions/transforms/index.htm
                // http://content.gpwiki.org/index.php/OpenGL:Tutorials:Using_Quaternions_to_represent_rotation
                // ^ or: http://webcache.googleusercontent.com/search?q=cache:xgJAp3bDNhQJ:content.gpwiki.org/index.php/OpenGL:Tutorials:Using_Quaternions_to_represent_rotation&hl=en&gl=us&strip=1

                // P_out = q * P_in * conj(q)
                // - P_out is the output vector
                // - q is the orientation quaternion
                // - P_in is the input vector (a*aReal)
                // - conj(q) is the conjugate of the orientation quaternion (q=[w,x,y,z], q*=[w,-x,-y,-z])
                Quaternion p = new Quaternion(0, x, y, z);

                // quaternion multiplication: q * p, stored back in p
                p = q.getProduct(p);

                // quaternion multiplication: p * conj(q), stored back in p
                p = p.getProduct(q.getConjugate());

                // p quaternion is now [0, x', y', z']
                x = (int)p.x;
                y = (int)p.y;
                z = (int)p.z;
            }

            public VectorInt16 getRotated(ref Quaternion q)
            {
                VectorInt16 r = new VectorInt16(x, y, z);
                r.rotate(ref q);
                return r;
            }
        };

        public class VectorFloat
        {
            public float x;
            public float y;
            public float z;

            public VectorFloat()
            {
                x = 0;
                y = 0;
                z = 0;
            }

            public VectorFloat(float nx, float ny, float nz)
            {
                x = nx;
                y = ny;
                z = nz;
            }

            float getMagnitude()
            {
                return (float)Math.Sqrt(x * x + y * y + z * z);
            }

            public void normalize()
            {
                float m = getMagnitude();
                x /= m;
                y /= m;
                z /= m;
            }

            public VectorFloat getNormalized()
            {
                VectorFloat r = new VectorFloat(x, y, z);
                r.normalize();
                return r;
            }

            public void rotate(Quaternion q)
            {
                Quaternion p = new Quaternion(0, x, y, z);

                // quaternion multiplication: q * p, stored back in p
                p = q.getProduct(p);

                // quaternion multiplication: p * conj(q), stored back in p
                p = p.getProduct(q.getConjugate());

                // p quaternion is now [0, x', y', z']
                x = p.x;
                y = p.y;
                z = p.z;
            }

            public VectorFloat getRotated(ref Quaternion q)
            {
                VectorFloat r = new VectorFloat(x, y, z);
                r.rotate(q);
                return r;
            }
        };
    }
}
