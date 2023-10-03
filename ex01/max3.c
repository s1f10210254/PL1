#include<stdio.h>


int main(){
    int x,y,z;
    int max = 0;
    printf("X = ");
    scanf("%d",&x);

    printf("X = ");
    scanf("%d",&y);

    printf("X = ");
    scanf("%d",&z);
    
    if (x >=y && x >= y){
        max += x;
    }
    else if(y >= x && y >=z){
        max += y;
    }
    else if(z >= x && z >= y){
        max += z;
    }
    printf("Maximu value is %d",max);
    return 0;
}