#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* reversed(const char * s)
{
    int slen = strlen(s);
    char* rev = (char*)malloc(slen + 1);

    for (int i = 0; i < slen; i++){
        rev[slen-1-i] = s[i];
    }
    rev[slen]  = '\0';
    return rev;
}

int main()
{
    char* s = reversed("INIAD Toyo");
    printf("%s\n",&s);
    return 0;
}