#include<stdio.h>
enum Hand{Rock, Scissors, Paper,N_HAND};

const char result_table[N_HAND][N_HAND]={
    {0, +1, -1},
    {-1, 0, +1},
    {+1, -1, 0},
};

int janken(enum Hand me, enum Hand opponent){
    return result_table[me][opponent];
}
int main(){
    printf("Rock vs Scissors: %d\n", janken(Rock,Scissors));
    return 0;
}