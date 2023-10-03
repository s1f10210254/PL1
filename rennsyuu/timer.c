#include<stdio.h>
#include<unistd.h>

int main(){
    int seconds;
    printf("seconds = ");
    scanf("%d",&seconds);

    for (int i = 3; i > 0; i--)
    {
        printf("%d\n",i);
        sleep(1);
    }
    printf("finished\n");
    return 0;
    
}