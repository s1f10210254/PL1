/*
double型の浮動小数の配列aとその要素数nを引数にとり、
その配列をヒープメモリ状に複製して返す関数copyarray(a,n)を定義せよ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double *copyarray(double* a, int n){
    double *t = (double*)malloc(n*sizeof(double)+1);
    for (int i = 0; i<n; i++)
    {
        t[i] = a[i];
    }
    
    
    return t;
}

int main()
{
    double arr[] = {1.0, 2.0, 3.0};
    double* replica = copyarray(arr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%f\n", replica[i]);
    }
    free(replica);
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double* copyarray(const double* a, int n){
    double* copy = (double*)malloc(n * sizeof(double));
    if (copy == NULL){
        return NULL;
    }
    memcpy(copy, a, n*sizeof(double));
    return copy;
}

int main()
{
    double arr[] = {1.0, 2.0, 3.0};
    double* replica = copyarray(arr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%f\n", replica[i]);
    }
    free(replica);
    return 0;
}