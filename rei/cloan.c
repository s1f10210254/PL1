//文字列を複製する関数
/*文字列を引数に受け取り、その文字列を
ヒープメモリ状に複製する関数*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *cloan(const char* s){
    size_t size = strlen(s) + 1;
    char *t = (char*)malloc(size);
    strcpy(t, s);
    return t;
}
int main(){
    char *orig = "INIAD",*copy;
    copy = cloan(orig);
    copy[0] = 'i';
    printf("orig =%s,copy=%s\n",orig,copy);
    free(copy);
    return 0;
}