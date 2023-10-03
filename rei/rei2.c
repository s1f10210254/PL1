#include <stdio.h>
#include<unistd.h>

int main()
{
    int t;
    
    printf("seconds = ");
    scanf("%d", &t);

    while (t > 0){
        printf("%d\n", t);
        sleep(1);
        t -= 1;    
    }

    printf("finished\n");
    return 0;
    
    
}