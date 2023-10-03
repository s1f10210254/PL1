#include <stdio.h>
#include <time.h>

int main(){
    FILE *fp =  fopen("diary.text", "a");
    if (!fp){
        fprintf(stderr, "ERROR: File open failed\n");
        return 1;
    }

    time_t t = time(NULL);
    char s[50];
    ctime_r(&t, s);
    fputs(s, fp);

    fclose(fp);
    return 0;
}