#include<stdio.h>

int main(){
    unsigned int x;
    printf("X = ");
    scanf("%d",&x);
    int n = 1;
    while(x /=10){
        ++n;
    }
    
    

    printf("The number of digits of X is %d\n", n);
    return 0;
}