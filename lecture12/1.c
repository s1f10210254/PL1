#include <stdio.h>
#include <math.h>
int quadeq(float a,float b,float c){
    float d;
    float *kai1, *kai2;
    d = b*b -4*a*c;
    if(d>0){
        *kai1 = (-b + sqrt(d)) /(2*a);
        *kai2 = (-b - sqrt(d)) / (2*a);

    }
    else if(d==0){
        *kai1=*kai2=-b/(2*a);
    }


    return 0;

}

int main(){
    int kai1=0;
    int kai2 = 0;
    printf("&kai1,&kai2\n",quadeq(2,2,2));
    return 0;
}