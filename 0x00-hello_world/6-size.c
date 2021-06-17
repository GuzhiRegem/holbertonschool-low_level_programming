#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu\n", sizeof(float));
	return (0);
}
