#include "holberton.h"

int main(void)
{
	int i , n;
	n = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
			n += i;
	}
	return(0);
}
