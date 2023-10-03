#include<stdio.h>
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
void repeat(void (*p)(),int n){
    for (int i = 0; i < n; i++)
    {
        p();
    }
}

void greet(void)
{
    puts("Hello");
}

int main()
{
    repeat(greet, 3);
    return 0;
}