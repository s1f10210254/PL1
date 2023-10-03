#include<stdio.h>
#include<string.h>

/*
int main(){
    int a[5] = {12, 34, 56, 78, 90};
    int b[5] = {-1, -2, -3, -4, -5};
    
    memcpy(&b[1], a, 3 * sizeof(int));

    printf("b = [%d, %d, %d, %d, %d]\n",b[0],b[1],b[2],b[3],b[4]);
    return 0;
}
*/
// = [-1, 12, 34, 56, -5]


//配列が等しいかどうか検査
int main()
{
    int a[5] = {12,34,56,78,90};
    int b[5] = {12,34,56,78,90};

    //if (a==b)と書いてはダメ
    if (memcmp(a, b, sizeof(a))==0){
        printf("a and b are the same\n");
    }
    else{
        printf("a and b are NOT the same\n");
    }
    return 0;
}