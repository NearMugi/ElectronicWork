#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)

//輪っか(逆)
const int ptn_a0[] = {0, 100, 10, 50, 10, 200, 10, 200, 0, 200};
const int ptn_a1[] = {0, 100, 10, 50, 10, 200, 10, 200, 0, 200};
const int ptn_a2[] = {0, 100, 10, 50, 10, 200, 10, 200, 0, 200};

const int ptn_a3[] = {0, 50, 10, 100, 10, 200, 10, 100, 0, 100, 0, 200};
const int ptn_a4[] = {0, 50, 10, 100, 10, 200, 10, 100, 0, 100, 0, 200};
const int ptn_a5[] = {0, 50, 10, 100, 10, 200, 10, 100, 0, 100, 0, 200};

const int ptn_a6[] = {10, 150, 10, 200, 10, 50, 0, 150, 0, 200};
const int ptn_a7[] = {10, 150, 10, 200, 10, 50, 0, 150, 0, 200};
const int ptn_a8[] = {10, 150, 10, 200, 10, 50, 0, 150, 0, 200};

#endif