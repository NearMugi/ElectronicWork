#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
//LED一つ一つのパターン(ptn_a0はLED1、ptn_a1はLED2、...)
const int ptn_a0[] = {
    10,
    100,
    0,
    800,
};
const int ptn_a1[] = {
    0,
    100,
    10,
    100,
    0,
    700,
};
const int ptn_a2[] = {
    0,
    200,
    10,
    100,
    0,
    600,
};
const int ptn_a3[] = {
    0,
    300,
    10,
    100,
    0,
    500,
};
const int ptn_a4[] = {
    0,
    400,
    10,
    100,
    0,
    400,
};
const int ptn_a5[] = {
    0,
    500,
    10,
    100,
    0,
    300,
};
const int ptn_a6[] = {
    0,
    600,
    10,
    100,
    0,
    200,
};
const int ptn_a7[] = {
    0,
    700,
    10,
    100,
    0,
    100,
};
const int ptn_a8[] = {
    0,
    800,
    10,
    100,
};

#endif
