#include <stdio.h>
int IS_DIGIT(c){
    
}

int main(){
    const char *testcase = "a1c80Z1!";
    for (int i = 0; testcase[i] != '\0'; i++){
        char c = testcase[i];
        printf("%c %d %d\n", c, IS_DIGIT(c), is_digit(c));
    }
    return 0;
}