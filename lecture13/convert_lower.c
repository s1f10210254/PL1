#include<stdio.h>
#include<string.h>

int convert_lower(char *p){
    int len;
    int result;
    len = strlen(p);
    for(int i=0; i< len ;i++){
        if ((i <='A') && (i <= 'Z')){
            result += i + 0x20;
        } 
    }
    return result;
}

int main()
{
    char s[] = "Inoue Enryo";

    convert_lower(s);

    printf("s = %s\n", s);
    return 0;
}