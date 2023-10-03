#include <stdio.h>
#include <stdint.h>

/*int change(unsigned int x){
    return x ^(1U << 31);
}*/
uint16_t change(uint16_t x){
    return x ^(1U >> 31);
}
    //return x ^ (1U << 13);

int main()
{
    uint16_t v = 0x1234;
    printf("%u -> %u\n", v, change(v));
    return 0;
}