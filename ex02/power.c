#include<stdio.h>
double power(double x, int n){
    double y = 1.0;

    if(n > 0){
        for (int i = 0; i < n; i++)
        {
             y*=x;
        }
    }
    else if(n < 0){
        for (int i = 0; i > n; i--)
        {
            y /=x;
        }
    }
    else{
        y = 1.0;
    }
    
    return y;
}
int main(){
    double x;
    int n;
    printf("X = ");
    scanf("%lf",&x);

    printf("n = ");
    scanf("%d",&n);
    printf("x ** n = %lf\n",power(x,n));
    return 0;
}