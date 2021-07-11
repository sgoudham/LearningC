#include <stdio.h>
void println(char *printString);

int main() 
{
	println("This is a test");
	return 0;
}

void println(char *printString) 
{
	printf("%s\n", printString);
}
