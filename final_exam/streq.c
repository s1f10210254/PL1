/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int streq(const char* s,const char* t){
    if (memcmp(s, t, sizeof(s))==0){
            if(strcmp(s,t)==0){
                return 0;
            }
        }
    return 1;

}

int main()
{
    printf("result1: %s\n", streq("iniad", "iniAD") ? "True": "False");
    printf("result2: %s\n", streq("INIAD", "INIADINI") ? "True": "False");
    printf("result3: %s\n", streq("iNiAd", "InIaD") ? "True": "False");
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int streq(const char* s, const char* t){
    int slen = strlen(s);
    int tlen = strlen(t);

    if(slen != tlen){
        return 0;
    }
    for (int i = 0; i < slen; i++)
    {
        if(toupper(s[i]) != toupper(t[i])){
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("result1: %s\n", streq("iniad", "iniAD") ? "True": "False");
    printf("result2: %s\n", streq("INIAD", "INIADINI") ? "True": "False");
    printf("result3: %s\n", streq("iNiAd", "InIaD") ? "True": "False");
    return 0;
}