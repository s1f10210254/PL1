#include<stdio.h>
#include<stdlib.h>
int* numbers(int n)
{
    int i;
    int* arr = (int*)malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    return arr;
}

int main()
{
    const int count = 5;

    int *nums = numbers(count);
    for (int i = 0; i < count; i++) {
        printf("%d\n", nums[i]);
    }

    free(nums);
    return 0;
}
