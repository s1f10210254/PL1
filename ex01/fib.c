#include<stdio.h>
int fib(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    printf("fib(40) = %d", fib(40));
    return 0;
}