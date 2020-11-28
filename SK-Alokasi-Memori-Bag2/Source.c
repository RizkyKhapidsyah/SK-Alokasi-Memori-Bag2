#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 1024

int main()
{
	char* sto;

	sto = malloc(sizeof(char) * SIZE);
	if (sto == NULL)
	{
		puts("Memory error");
		return(1);
	}
	else
	{
		printf("%d bytes of memory allocated at %p\n", SIZE, sto);
	}

	_getch();
	return(0);
}