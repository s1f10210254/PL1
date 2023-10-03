#include <stdio.h>

typedef struct {
    char name[1000];
    int  price;
} Food;

void print_food(const Food* f)
{
    printf("%s (%d yen)\n", f->name, f->price);
}

int main()
{
    Food ramen = {.name = "Ramen", .price = 650};
    Food pudding = {.name = "Pudding", .price = 300};

    print_food(&ramen);
    print_food(&pudding);
    return 0;
}