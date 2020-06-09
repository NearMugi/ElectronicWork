#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)

// 1 消灯
const int ptn_a0[] = {};
const int ptn_a1[] = {};
const int ptn_a2[] = {};

// 2 全点灯
const int ptn_b0[] = {10, 100};
const int ptn_b1[] = {10, 100};
const int ptn_b2[] = {10, 100};

// 3 雷
const int ptn_c0[] = {10, 3, 0, 6, 0, 300};
const int ptn_c1[] = {0, 3, 10, 3, 0, 3, 0, 300};
const int ptn_c2[] = {0, 6, 10, 3, 0, 300};

// 4 輪っか
const int ptn_d0[] = {10, 150, 0, 150, 0, 150, 0, 200};
const int ptn_d1[] = {0, 150, 10, 150, 0, 150, 0, 200};
const int ptn_d2[] = {0, 150, 0, 150, 10, 150, 0, 200};

// 5 輪っか(逆)
const int ptn_e0[] = {0, 150, 0, 150, 10, 150, 0, 200};
const int ptn_e1[] = {0, 150, 10, 150, 0, 150, 0, 200};
const int ptn_e2[] = {10, 150, 0, 150, 0, 150, 0, 200};

// 6 2分割
const int ptn_f0[] = {10, 30, 0, 20};
const int ptn_f1[] = {10, 30, 0, 20};
const int ptn_f2[] = {10, 30, 0, 20};

// 7 2分割(ゆっくり移動)
const int ptn_g0[] = {10, 56, 0, 56};
const int ptn_g1[] = {0, 56, 10, 56};
const int ptn_g2[] = {10, 56, 0, 56};

// 8 3等分
const int ptn_h0[] = {10, 20, 0, 20};
const int ptn_h1[] = {10, 20, 0, 20};
const int ptn_h2[] = {10, 20, 0, 20};

// 9 細かい分割
const int ptn_i0[] = {10, 6, 0, 4};
const int ptn_i1[] = {10, 6, 0, 4};
const int ptn_i2[] = {10, 6, 0, 4};

// 0
const int ptn_j0[] = {};
const int ptn_j1[] = {};
const int ptn_j2[] = {};

#endif
