#include<stdio.h>
void print_tail(const char* s){
    if (s[0] == '\0'){
        printf("\n");
        return;
    }
    printf("%s\n",&s[1]);
}
int main(){
    print_tail("INIAD Toyo");
    return 0;
}