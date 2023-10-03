#include <stdio.h>

/*
文字列へのポインタ p を引数に取り、
その文字列に含まれる文字 s または S の個数
を返す関数 count_s(p) を定義せよ
*/
int count_s(const char* p){
    int count = 0;
    for (int i = 0; p[i] !='\0'; i++)
    {
        if (p[i] == 's' || p[i] == 'S')
        {
            count++;
        }
    }
    return count;   
}
int main(){
    char *a = "shop";
    char *b = "ssS";
    printf("%d\n",count_s(a));
    printf("%d\n",count_s(b));
    return 0;
    
}

