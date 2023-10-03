#include<stdio.h>

unsigned int setclear(x){
    x = x&~(1<<3);
}



int main()
{
    int x = 153; // 2進数で10011001
    printf("%d\n", setclear(x)); // 209 (2進数で11010001) が表示されるはず
    return 0;
}