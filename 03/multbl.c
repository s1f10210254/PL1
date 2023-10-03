#include <stdio.h>

int main(void) { 
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            printf("%d ", a*b);
        }
        printf("\n");
    }
}