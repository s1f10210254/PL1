/*#include<stdio.h>
int count_s(const char *p){
    int count = 0;
    for (int i = 0; p[i]!= '\0'; i++)
    {
        if (p[i] == 's' || p[i] == 'S')
        {
            count++;
        }
        
    }
    return count;
    
}

int main()
{
    const char* s = "Mississippi";
    const char* t = "U.S.A.";

    printf("count_s(s) = %d\n", count_s(s));
    printf("count_s(t) = %d\n", count_s(t));

    return 0;
}
*/

#include <stdio.h>
char count_s(const char *p){
    int count=0;
    for (int i = 0; p[i]!='\0'; i++)
    {
        if(p[i] == 's'|| p[i]== 'S'){
            count++;
        }
    }
    return count;
    

}

int main()
{
    const char* s = "Mississippi";
    const char* t = "U.S.A.";

    printf("count_s(s) = %d\n", count_s(s));
    printf("count_s(t) = %d\n", count_s(t));

    return 0;
}