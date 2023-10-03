/*
2つの文字列へのポインタs,suffixを引数にとり,
s,suffixを引数にとり、文字列sの末尾が文字列
suffixとなっているかを真偽値として返す関数
endwsith(s,suffix)を定義せよ
*/
#include <stdio.h>
#include<string.h>
int endswith(char* s, char* suffix){
    int len = strlen(s);
    int suffixlen = strlen(suffix);
    if (suffixlen > len){
        return 0;
    }
    return strcmp(&s[len - suffixlen], suffix) == 0;
}

int main()
{
    printf("result1: %s\n", endswith("INIAD", "AD") ? "True": "False");
    printf("result2: %s\n", endswith("AD", "INIAD") ? "True": "False");
    printf("result3: %s\n", endswith("INIAD", "INIAD") ? "True": "False");
    return 0;
}