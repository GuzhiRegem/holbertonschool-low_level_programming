#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char i,i_;

	for (i = '0'; i <= '9'; i++)
	{
		for (i_ = i; i_ <= '9'; i_++)
		{
			if (i != i_)
			{
				putchar(i);
				putchar(i_);
				if (i < '8')
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
