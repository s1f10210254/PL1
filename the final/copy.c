#include <stdio.h>
#include<string.h>
void copy(char* dst,char* src){
    size_t i;
    for (i = 0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }
    dst[i] = '\0';
}



int main()
{
    char s[100];
    copy(s, "iniad");
    printf("%s\n", s);
    copy(s, "toyo");
    printf("%s\n", s);
    return 0;
}