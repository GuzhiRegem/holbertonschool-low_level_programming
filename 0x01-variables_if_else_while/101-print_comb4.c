#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int i, i_, i__;

	for (i = 0; i <= 7; i++)
	{
		for (i_ = i+1; i_ <= 8; i_++)
		{
			for (i__ = i_+1; i__ <= 9; i__++)
			{
				if ((i != i_)&&(i != i__)&&(i__ != i_))
				{
					putchar(i + '0');
					putchar(i_ + '0');
					putchar(i__ + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
