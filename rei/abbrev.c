#include<stdio.h>
#include<string.h>
void abbrev(const char* s, char* t){
    int pos = 0;
    for (int i = 0; s[i] != '\0' ; i++)
    {
        if(i %2 == 0){
            t[pos++] = s[i];
        }
    }
    t[pos] = '\0'; 
}
int main(){
    char *a = "INIAD";
    char b[128];
    abbrev(a,b);
    printf("%s ->%s\n",a,b);
    return 0;
}