#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)
const int ptn_a0[] = {
    0,
    500,
    5,
    500,
    10,
    500,
};
const int ptn_a1[] = {
    5,
    500,
    10,
    500,
    0,
    500,
};
const int ptn_a2[] = {
    10,
    500,
    0,
    500,
    5,
    500,
};
const int ptn_a3[] = {
    0,
    100,
    5,
    100,
    10,
    100,
};
const int ptn_a4[] = {
    5,
    100,
    10,
    100,
    0,
    100,
};
const int ptn_a5[] = {
    10,
    100,
    0,
    100,
    5,
    100,
};
const int ptn_a6[] = {
    0,
    1000,
    5,
    1000,
    10,
    1000,
};
const int ptn_a7[] = {
    5,
    1000,
    10,
    1000,
    0,
    1000,
};
const int ptn_a8[] = {
    10,
    1000,
    0,
    1000,
    5,
    1000,
};

#endif
