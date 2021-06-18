#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int i,i_;

	for (i = 0; i <= 9; i++)
	{
		for (i_ = i; i_ <= 9; i_++)
		{
			if (i != i_)
			{
				putchar(i + '0');
				putchar(i_ + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
