/*
#include <stdio.h>


void repeat(void (*f)(), int n){
    for (int i = 0; i < n; i++){
        f();
    }
}
void hello()
{
    printf("hello\n");
}
void iniad()
{
    printf("iniad\n");
}
int main()
{
    repeat(hello, 2);
    repeat(iniad, 3);
    return 0;
}
*/

#include<stdio.h>
void repeat(void (*f)(),int n){
    for (int i = 0; i < n; i++)
    {
        f();
    }
}
void hello(){
    printf("hello\n");
}

void iniad(){
    printf("iniad\n");
}
int main(){
    repeat(hello,3);
    repeat(iniad,2);
    return 0;
}