#include<stdio.h>
typedef struct 
{
    int year;
    int month;
    int day;
} date;

void print_date(date* d)
{
    printf("%04d-%02d-%02d\n", d->year,d->month,d->day);
};


int main(){
    date d;
    d.year = 2022;
    d.month = 5;
    d.day = 24;
    print_date(&d);
    return 0;

}