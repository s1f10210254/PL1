#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    if (argc != 3){
        fprintf(stderr, "ERROR: wrong number of arguments\n");
        return 1;
    }

    char* msg = argv[1];
    int count = atoi(argv[2]);

    int i;
    for (i=0; i<count; i++){
        printf("%s\n", msg);
    }
    return 0;
}