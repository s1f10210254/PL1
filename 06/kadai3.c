#include <stdio.h>
#include <string.h>
char* strdupcat(const char* s, const* t)
{
    char* dest = (char *) malloc(strlen(s) + strlen(t) +1);
    strcpy(dest,s);
    return strcat(dest,t);

}
int main(){
    char *s= strdupcat("INIAD","Toyo");
    s[5] = 'Y';
    printf("%s\n",s);
    free(s);
    return 0;
}