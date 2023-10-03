#include <stdio.h>

struct fraction {
    int numer;
    int denom;
};

void fraction_print(struct fraction a) {
    printf("%d\n-\n%d\n", a.numer,a.denom);
}

struct fraction fraction_mul(struct fraction a,struct fraction b) {
    struct fraction result;
    result.numer = a.numer * b.numer;
    result.denom = a.denom * b.denom;
    return result;
}

int main()
{
    struct fraction a,b,c;
    a.numer =7;
    a.denom =3;
    b.numer =2, 
    b.denom =5;

    c = fraction_mul(a,b);
    fraction_print(c);

    return 0;
}