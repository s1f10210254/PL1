//int型の引数nをとり、これまでの過去に渡された引数のうち最も大きいものを返す関数best(n)を定義せよ
#include<stdio.h>
static int max = 0;
int best(int n){
    if (n > max)
    {
        max = n;
    }
    return max;
}
int main(){
    printf("%d\n", best(1));
    printf("%d\n", best(1)); 
    printf("%d\n", best(3)); 
    printf("%d\n", best(2)); 
}