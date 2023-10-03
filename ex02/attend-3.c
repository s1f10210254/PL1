#include <stdio.h>

void check(int a, int b, int c)
{
    if (a != b && b != c && c != a)
    {
        printf("OK\n");
    }
    else{
        printf("NG\n");
    }
    return 0;
}

int main()
{
    int a, b, c;
    printf("a =");
    scanf("%d", &a);

    printf("b =");
    scanf("%d", &b);

    printf("c =");
    scanf("%d", &c);
    return 0;
}