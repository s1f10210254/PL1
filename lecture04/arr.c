#include<stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = &a[0];

    printf("%d\n", *p);
    return 0;
}