#include<stdio.h>
void swap(double *px, double *py)
{
    double z = *px;
    *px = *py;
    *py = z;
}

int main()
{
    double x = 1.0, y= 2.0;

    swap(&x, &y);
    printf("x = %lf, y = %lf\n",x,y);
    return 0;
    
}