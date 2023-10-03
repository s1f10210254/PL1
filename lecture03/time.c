#include<stdio.h>
void time(int seconds, int* h,int* m,int* s){
    *s = seconds % 60;
    int minutes = seconds / 60;
    *m = minutes % 60;
    *h = minutes / 60;
}

int main(){
    int hour, min, sec;
    time(10000,&hour, &min, &sec);
    printf("%d時%d分%d秒\n",hour,min,sec);
}