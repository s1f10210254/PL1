#include<stdio.h>
struct person
{
    char name[10];
    int age;
};
void show_person(const struct person* p){
    printf("%s (%d)\n", p->name, p->age);
}

int main(){
    struct person enryo = {
        .name = "Enryo", .age = 24
    };

    show_person(&enryo);
    return 0;
}