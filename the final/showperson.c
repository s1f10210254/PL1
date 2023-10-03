#include <stdio.h>

typedef struct {
    char first_name[40];
    char family_name[40];
    int  grade;
} Person;
char showperson(Person *p){
    printf("%s %s/n",p->family_name, p->first_name);
}  

int main()
{
    Person taro = {.first_name="Enryo", .family_name="Inoue", .grade=2};
    showperson(&taro);
    return 0;
}