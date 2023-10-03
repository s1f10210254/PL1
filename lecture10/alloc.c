#include <stdio.h>
#include <stdlib.h>
#define N 10

#define ALLOC_HEAP(typ, n) (typ*)malloc(sizeof(typ) * (n))

int main()
{
    int i, *a = ALLOC_HEAP(int, N);

    for (int i = 0; i < N; i++) {
        a[i] = i;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", i);
    }
    free(a);
    return 0;
}