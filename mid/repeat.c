
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    if (argc !=3){
        fprintf(stderr, "ERROR: wrong number of arguments\n");
        return 1;
    }
    const char* s = argv[1];
    int n = atoi(argv[2]);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",s);
    }
    return 0;
}
