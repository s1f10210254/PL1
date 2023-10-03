#include <stdio.h>
#include <string.h>

int isequal(const char* s, const char* t)
{
    //return s == t;
    return strcmp(s, t) == 0;
}

int main()
{
    const char s[] = "INIAD";
    const char t[] = "INIAD";
    printf("String s and t are equal? %s\n", isequal(s, t) ? "True" : "False");
    return 0;
}
