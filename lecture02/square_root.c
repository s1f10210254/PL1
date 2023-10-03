#include <stdio.h>

double square_root(double x)
{
    double a;
    int i;

    for (a = x, i = 1; i < 10; i++) {
        a -= (a * a - x) / (2 * a);
    }
    
    return a;
}

int main()
{
    for (int i = 1; i <= 5; i++) {
        printf("square_root(%d) = %f\n", i, square_root(i));
    }
    return 0;
}