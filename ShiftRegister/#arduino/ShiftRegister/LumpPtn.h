#ifndef LUMPPTN_H
#define LUMPPTN_H

//タイムシーケンス　値は[デューティー比(0:0% - 10:100%),ステップ数]のセット
//例えば値の更新が1msの場合、1000ステップを指定すれば1,000ms間同じ値になる。
#if false
const int ptn_a0[] = {0, 50, 3, 50,6, 50, 10, 50, };
const int ptn_a1[] = {3, 50, 6, 50,10, 50, 0, 50, };
const int ptn_a2[] = {6, 50, 10, 50, 0, 50,3, 50, };
const int ptn_a3[] = {10, 50, 0, 50,3, 50, 6, 50, };
#else
const int ptn_a0[] = {10, 1000, };
const int ptn_a1[] = {10, 1000, };
const int ptn_a2[] = {10, 1000, };
const int ptn_a3[] = {10, 1000, };
#endif
const int ptn_a4[] = {0, 0};
const int ptn_a5[] = {0, 0};
const int ptn_a6[] = {0, 0};
const int ptn_a7[] = {0, 0};



#endif
