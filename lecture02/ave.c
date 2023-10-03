#include <stdio.h>



int main()
{
    int sum = 0;
    int count = 0;
    int x;

    for (;;) {
        printf("Number?(-1 to exit): ");
        scanf("%d", &x);

        if (x == -1) break;

        sum += x;
        count++;
    }
    
    printf("Average = %f\n", (double)sum / (double) count);
    return 0;
}