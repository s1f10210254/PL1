// test_print.c
#include <stdio.h>

int main()
{
    FILE *fp = fopen("Hello world.", "r");
    if(!fp){
        fprintf(stderr, "ERROR: failed to open file\n");
        return 1;
    }

    char buf[128];
		
    while(ここを考える){
        printf("%s", buf);
    }
		
    fclose(fp);
    return 0;   
}
