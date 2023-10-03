#include <stdio.h>

double power(double x, int n)
{
    double result = 1.0;
    if (n > 0){
        for (int i = 0; i < n; i ++){
            result *= x;
        }
    }
    else if (n < 0){
        for (int i=0; i > n; i--){
            result /= x;
        }
    }
    else{
        return 1;
    }
    return result;
}

int main(){
    double x;
    int n;

    printf("X = ");
    scanf("%lf",&x);

    printf("n = ");
    scanf("%d", &n);

    printf("x ** n = %lf\n",power(x,n));
    return 0;
}