#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)

// 雷
const int ptn_a0[] = {10, 10, 0, 20, 0, 500};
const int ptn_a1[] = {0, 10, 10, 10, 0, 10, 0, 500};
const int ptn_a2[] = {0, 20, 10, 10, 0, 500};

// 輪っか
const int ptn_b0[] = {10, 150, 10, 200, 10, 50, 0, 150, 0, 200};
const int ptn_b1[] = {0, 50, 10, 100, 10, 200, 10, 100, 0, 100, 0, 200};
const int ptn_b2[] = {0, 100, 10, 50, 10, 200, 10, 200, 0, 200};

// 輪っか(逆)
const int ptn_c0[] = {0, 100, 10, 50, 10, 200, 10, 200, 0, 200};
const int ptn_c1[] = {0, 50, 10, 100, 10, 200, 10, 100, 0, 100, 0, 200};
const int ptn_c2[] = {10, 150, 10, 200, 10, 50, 0, 150, 0, 200};

//
const int ptn_d0[] = {};
const int ptn_d1[] = {};
const int ptn_d2[] = {};

//
const int ptn_e0[] = {};
const int ptn_e1[] = {};
const int ptn_e2[] = {};

//
const int ptn_f0[] = {};
const int ptn_f1[] = {};
const int ptn_f2[] = {};

//
const int ptn_g0[] = {};
const int ptn_g1[] = {};
const int ptn_g2[] = {};

//
const int ptn_h0[] = {};
const int ptn_h1[] = {};
const int ptn_h2[] = {};

//
const int ptn_i0[] = {};
const int ptn_i1[] = {};
const int ptn_i2[] = {};

//
const int ptn_j0[] = {};
const int ptn_j1[] = {};
const int ptn_j2[] = {};

#endif
