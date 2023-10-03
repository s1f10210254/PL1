//文字列をmallocで複製する
//char* strdup(const char* s)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mystrdup(const char *s){
    size_t size = strlen(s) + 1;
    char *t = (char*)malloc(size);
    return strcpy(t,s);
}

int main(){
    char *orig = "INIAD", *copy;
    copy = mystrdup(orig);
    copy[0] = 'i';

    printf("orig = %s, copy = s\n",orig);
    free(copy);
    return 0;
}