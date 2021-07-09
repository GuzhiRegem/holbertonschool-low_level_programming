#include <stdio.h>

/**
 *main - func
 *@argc : ja
 *@argv :ja
 *
 *Return: a
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
