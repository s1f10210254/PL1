#include <stdio.h>
void round100(unsigned int* p){
    *p = ((*p + 50)/ 100)*100;
}

int main(){
    unsigned int x = 12345,y = 67890;
    round100(&x);
    round100(&y);
    printf("%d, %d\n",x,y);
    return 0;
}