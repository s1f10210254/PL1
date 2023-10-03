#include <stdio.h>

void trim(const char* s, char* d){
	int pos = 0;
	for (int i = 0; s[i] !='\0'; i++)
	{
		if(s[i] != ' '){
			d[pos++] = s[i];
		}
	}
	d[pos] = '\0';
	
}

int main()
{
    char* text = "Programming language C is wonderful";
    char output[256];

    trim(text, output);
    printf("result = %s\n", output);
    return 0;
}