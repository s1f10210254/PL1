//AからZまでの文字を表示する
#include<stdio.h>

int main()
{
    char c;
    for(c ='A'; c <= 'Z'; c++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}