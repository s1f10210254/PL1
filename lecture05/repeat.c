#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* repeat(const char* s, int n){
    int slen = strlen(s);
    char* t = (char*)malloc(slen * n + 1);

    for (int i = 0; i < n; i++)
    {
        memcpy(&t[slen * i], s, slen);
    }
    t[slen * n] = '\0';
    return t;
    
}

int main()
{
    char *s = repeat("INIAD", 3);
    printf("%s\n", s);
    free(s);
    return 0;
}