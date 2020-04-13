#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)
const int ptn_a0[] = {
    10,
    20,
    0,
    40,
    0,
    2000,
};
const int ptn_a1[] = {
    10,
    20,
    0,
    40,
    0,
    2000,
};
const int ptn_a2[] = {
    10,
    20,
    0,
    40,
    0,
    2000,
};
const int ptn_a3[] = {
    0,
    20,
    10,
    20,
    0,
    20,
    0,
    2000,
};
const int ptn_a4[] = {
    0,
    20,
    10,
    20,
    0,
    20,
    0,
    2000,
};
const int ptn_a5[] = {
    0,
    20,
    10,
    20,
    0,
    20,
    0,
    2000,
};
const int ptn_a6[] = {
    0,
    40,
    10,
    20,
    0,
    2000,
};
const int ptn_a7[] = {
    0,
    40,
    10,
    20,
    0,
    2000,
};
const int ptn_a8[] = {
    0,
    40,
    10,
    20,
    0,
    2000,
};

#endif
