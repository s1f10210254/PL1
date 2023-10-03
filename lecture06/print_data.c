#include<stdio.h>

typedef enum { 
    SHOWA, HEISEI, REIWA
} jpn_era;

typedef struct 
{
    jpn_era era;
    int year;
    int month;
    int day;
} jpn_date;


void print_date(const jpn_date* d)
{
    char* era_name;
    switch (d->era)
    {
        case SHOWA: era_name = "昭和"; break;
        case HEISEI: era_name = "平成"; break;
        case REIWA: era_name = "令和"; break;
    }

    printf("%s%d年 %d/%d\n",era_name,d->year,d->month,d->day);
};


int main(){
    jpn_date today {
        .era = REIWA,
        .year = 4;
        .month = 5;
        .day = 24;
    };
    print_date(&today);
    return 0;
}