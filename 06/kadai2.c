#include <stdio.h>
#include <string.h>

void interleave(char* d,const char a,const char b){
    int x = 0;
    for (int i = 0; a[i] != "\0" && b[i] != "\0";i++){
        d[x] = a[i];
        x ++;
        d[x] = b[i];
        x++;
    
    }
}
int main(){
    char s[] = "INIAD";
    char t[] = "Toyo";
    char d[1000];
    interleave(d, s, t);
    printf("%s + %s = %s\n", s, t, d);
    return 0;
}
