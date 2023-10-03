#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    int n = atoi(argv[2]);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",argv[1]);
    }
    return 0;
}