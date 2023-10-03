
/*
2つのコマンドライン引数を受け取り、より短い法の文字列
を標準出力上に表示するプログラムshorterを作成せよ
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    if (argc != 3){
        fprintf(stderr, "ERROR: wrong number of arguments\n");
        return 1;
    }
    const char* s = argv[1];
    const char* p = argv[2];
    int lens = strlen(s);
    int lenp = strlen(p);
    char result[20];
    if (lens < lenp)
    {
        strcpy(result,s); 
    }
    if(lens > lenp) {
        strcpy(result,p);
    }
    
    printf("%s\n",result);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    const char* s1 = argv[1];
    const char* s2 = argv[2];

    printf("%s\n", strlen(s1) < strlen(s2) ? s1 : s2);

    return 0;
}