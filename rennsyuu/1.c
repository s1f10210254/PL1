#include<stdio.h>

int main(){
    unsigned int x;
    int digits = 0;
    printf("X = ");
    scanf("%u",&x);
    while (x >= 1 )
    {
        x /=10;
        digits++;
    }
    printf("The number of digits of X is %d\n",digits);
    return 0;
    
}