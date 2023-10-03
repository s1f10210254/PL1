#include <stdio.h>
/*
int find_zero(int *a, int n)
{
    for ( int i = 0; i < n; i++)
    {
        if (a[i] == 0){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,0,4,5};
    printf("zero?%s\n", find_zero(a, 5) ? "yes" : "no");
    printf("zero?%s\n", find_zero(b, 6) ? "yes" : "no");
}
*/

/*int型の配列へのぽインタaと配列の要素数nを引数にとり、
配列内に0が含まれているかどうかを返す関数
*/
int find_zero(int* a,int n){
    for (int i = 0; i < n; i++)
    {   
        if(a[i] == 0){
            return 1;
        }
    }
    return 0;
    
}
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,0,4,5};
    printf("a contains zero? : %s\n",find_zero(a,5)? "yes":"no");
    printf("a contains zero? : %s\n",find_zero(b,6)? "yes":"no");
    return 0;

}