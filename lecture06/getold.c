#include <stdio.h>

struct person
{
    char name[10];
    int age;
};

void getold(struct person *p){
    p->age ++;
}

int main(){
    struct person enryo={
        .name = "Enryo",
        .age = 12
    };
    getold(&enryo);
    printf("enryo age is %d\n",enryo.age);
    return 0;
}
