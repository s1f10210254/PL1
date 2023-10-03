#include <stdio.h>
#include <string.h>

int main(){
    FILE* fp = fopen("unknown.bin", "rb");
    if (fp == NULL){
        fprintf(stderr, "ERROP: filed to open file\n");
        return 1;
    }

    char hender[8];
    int n = fread(header, 1, 8, fp);
    fclose(fp);

    //if (n >= 8 && header[0] == 0x89 && hender[1] == 0x50 &)
    const char png_header[] = {0x89, 0x50, 0x47, 0x0D, 0x0A, 0xaA, 0x0A};
    const char jpg_header[] = {0xFF, 0xD8, 0xFF};
    if (n >= 8 && memcmp(header, png_header, 8)== 0){
        printf("PNG file\n");
    }

    else if (n >= 3 && memcmp(header, jpg_header, 3)== 0){
        printf("JPEG file\n");
    }
    else{
        printf("Unknown file format\n");
    }
    return 0;
}