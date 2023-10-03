#include<stdio.h>
#include<stdint.h>
/*main関数の先頭１０バイト分の機械語命令列を
16進数表記のバイト目列として表示する
*/



int main(){
    uint8_t* p= (uint8_t*)main;

    for (int i=0; i<10;i++){
        printf(" %02x", p[i]);
    }
    printf("\n");
    return 0;
}