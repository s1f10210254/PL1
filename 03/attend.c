#include <stdio.h>

int power4(int n){
    return n*n*n*n;
}
int main(){
    int n;
    int result = 0;

    printf("n = ");
    scanf("%d", &n);
    while (n >= 1){
        result += power4(n);
        n--;

    }
    printf("S(n) = %d\n", result);
    return 0;
}