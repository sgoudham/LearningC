#include <stdio.h>
void println(char *printString);

int main() 
{
	println("Hello World!");
	return 0;
}

void println(char *printString) 
{
	printf("%s\n", printString);
}
