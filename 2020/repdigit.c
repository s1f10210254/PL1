/*
1桁の16進数 x を引数に受け取り、
その数字を 3 個ならべてできる16ビット符号なし
整数を返す関数 repdigit(x) を定義せよ
*/

#include <stdio.h>
#include <stdint.h>

uint16_t repdigit(uint16_t x){
    return x << 8 | x<< 4 | x;
}

int main()
{
    uint16_t x = 0x5, y = 0xA;

    printf("repdigit(0x%x) = 0x%x\n", x, repdigit(x));
    printf("repdigit(0x%x) = 0x%x\n", y, repdigit(y));

    return 0;
}