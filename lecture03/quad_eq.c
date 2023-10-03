#include<stdio.h>
#include<math.h>

void quad_eq(double a, double b, double c,double *p, double *q){
    double D  =  sqrt(b * b -4*a*c);
    *p = (-b + D)/2*a;
    *q = (-b - D)/2*a;
}

int main(){
    double x1,x2;
    quad_eq(1,-3,2,&x1,&x2);
    printf("%f, %f\n", x1, x2);
    return 0;

}
