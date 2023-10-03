#include<stdio.h>
#include<stdlib.h>
void shuffle(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        int r = rand()%size;
        int t = arr[i];
        arr[i] = arr[r];
        arr[r] = t;
    }   
}
int main(){
    int list[5] = {1,2,3,4,5};
    shuffle(list, 5);
    for (int i=0; i<5; i++){
        printf("%d", list[i]);
    }
    return 0;
}