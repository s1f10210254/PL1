#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void vprint(char a[])
{
    int len = strlen(a)+1;
    for (int i = 0; i < len; i++) {
        printf("%c\n", a[i]);
    }
}


int main()
{
    vprint("INIAD is wonderful");
    return 0;
}