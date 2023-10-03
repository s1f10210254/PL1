#include <stdio.h>

int my_abc(int x)
{
    if (x < 0){
        x *= -1;
    }
    
    return x;
    
}

int main()
{
    int abc;
    printf("数を入力してください");
    scanf("%d", &abc);
    printf("絶対値は%dです\n", my_abc(abc));
    return 0;
}