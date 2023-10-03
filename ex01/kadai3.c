#include <stdio.h>

int max(int x,int y,int z){
    if (x >= y && x >= z){
        return x;
    }
    else if(y >= x && y >= z){
        return y;
    }
    else{
        return z;
    }
}

int main()
{
    int x, y, z;
    printf("X = ");
    scanf("%d", &x);

    printf("Y = ");
    scanf("%d", &y);

    printf("Z = ");
    scanf("%d", &z);

    printf("Maximum value is %d\n", max(x, y, z));
    return 0;


}