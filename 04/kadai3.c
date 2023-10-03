#include <stdio.h>
int max5(int a, int b, int c, int d, int e, int *idx)
{
    int max = 0;

    if (a > max){
        max = a;
        *idx = 1;
    }

    if (b > max){
        max = b;
        *idx = 2;
    }
    if (c > max){
        max = c;
        *idx = 3;
    }
    if (d > max){
        max = d;
        *idx = 4;
    }
    if (e > max){
        max = e;
        *idx = 5;
    }
    return max;
}
int main(){
    int n;
    printf("%d", max5(10,30,50,40,20, &n));
    printf(" (n = %d)", n);
    return 0;
}