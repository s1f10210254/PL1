//strncpy長さ指定付きで文字列を複製する
#include<stdio.h>
#include<string.h>
int main(){
    char buf[12];

    //バッファサイズを超えない範囲で文字列データを複製
    strncpy(buf, "INIAD is wonderful", sizeof(buf));

    //バッファ内に文字列がおさまったかどうかを検査
    if (buf[sizeof(buf)-1] == '\0'){
        printf("buf = %s\n", buf);
    }
    else{
        //バッファサイズが足りず最後のNUL文字が書き込まれていないので追加
        buf[sizeof(buf)-1] = '\0';
        printf("buf = %s (partial)\n", buf);
    }
    return 0;
}