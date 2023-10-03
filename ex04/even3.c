#include <stdio.h>

void *add_vector(int *a, int *b) {
    for (int i = 0; i < 3; i++) {
        a[i] = a[i] + b[i];
    }
    return a;
}

int main(void) {
    int a[] = {1,-2,3};
    int b[] = {-3,4,5};
    int *result = add_vector(a,b);
    for (int i = 0; i < 3; i++) {
        printf("%d, ", result[i]);
    }
    printf("\n");
    return 0;
}