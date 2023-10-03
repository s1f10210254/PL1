#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *catarr(int* a1, int* a2, int n){
    int*s = (int*)malloc(n*2+1);
    s[0] = a1[0];
    s[1] = a1[1];
    s[2] = a1[2];
    s[3] = a2[0];
    s[4] = a2[1];
    s[5] = a2[2];
    return s;
}

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {9,8,7};
    int* replica = catarr(arr1, arr2, 3);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", replica[i]);
    }
    free(replica);
    return 0;
}