#include <stdio.h>

// Ascending sort
void aSort(int *a, int *b)
{
    int tmp;
    if (*a > *b){
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    /* 5. *a が *bより大きい場合は、値を交換する。 */
}

int main()
{
    int x, y;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    aSort(/* 3. ここを考える */);
    printf("After asending sort: x = %d, y = %d \n", aSort);

    return 0;
}
