//２つの整数ｘ、ｙを引数にとりその商と余りを返すdivideを定義せよ
#include<stdio.h>
void divide(int x,int y, int *p,int *q){
    *p = x / y;
    *q = x % y;

}

int main(){
    int x,y;
    divide(123,45,&x,&y);
    printf("%d %d\n",x,y);
}
