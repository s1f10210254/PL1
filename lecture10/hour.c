#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2){
        fprintf(stderr, "Usage: hour 0-23\n");
        return 1;
    }

    int hour = atoi(argv[1]);

#if AMPM
    printf("It\'s %d %s.\n",hour % 12)
#else
    printf("It\'s %d.", hour);
#endif
    return 0;
}