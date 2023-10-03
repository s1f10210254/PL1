#include <stdio.h>

int factorial(int n)
{
    int result;
    result = 1;
    for (int i = 2; i <= n; i++)
    {
        result =  result * i;
    }
    return result;
}
    
int main()
{
    for(int i = 1; i <= 50; i++){
        printf("%u!=%u\n", i, factorial(i));
    }
    return 0;
}