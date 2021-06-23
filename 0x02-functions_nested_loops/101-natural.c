#include "holberton.h"

void printnum(int n);
int main(void)
{
	int i , n;
	n = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
			n += i;
	}
	printnum(n);
	return(0);
}
