/*
#include <stdio.h>

int abbrev(const char* s,char* v)
{
    for(int i = 0; i < sizeof(s); i++)
    {
        if(!(i % 2 == 0))
        {
            v += i;
        }
    }
    return 0;
}
int main()
{
    int* v;
    char a[] = "iniad";
    char b[] = "Kwsk";12
    printf("%c\n",(abbrev(a,v)));
    printf("%c\n",(abbrev(b,v)));
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

void abbrev(const char* s, char* t){
    int pos = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 == 0){
            t[pos++] == s[i];
        }
    }
    t[pos] = '\0';
    
}

int main()
{
    char* s = "INIAD Toyo University";
    char t[128];

    abbrev(s, t);
    printf("%s --> %s\n", s, t);
    return 0;
}
*/
#include <stdio.h>

void abbrev(const char* s, char* t)
{
    int pos = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (i % 2 == 0) {
            t[pos++] = s[i];
        }
    }
    t[pos] = '\0';
}

int main()
{
    char* s = "INIAD Toyo University";
    char t[128];

    abbrev(s, t);

    printf("%s --> %s\n", s, t);
    return 0;
}
