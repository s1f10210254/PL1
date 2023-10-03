#include<stdio.h>
static int result;
int sum(int *a,int n){
    for (int i = 0; i <= n; i++)
    {
        result += i;
    }
    return result;
    
}

#include <stdio.h>
#include <stdint.h>

int main()
{
    int values[] = {1, 2, 3, 4, 5,6};

    printf("sum = %d\n", sum(values, 6));
    return 0;
}