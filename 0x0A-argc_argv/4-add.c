#include <stdio.h>
#include <stdlib.h>

/**
 *main - func
 *@argc : ja
 *@argv :ja
 *
 *Return: a
 */
int main(int argc, char *argv[])
{
	int num1, num2 = 0;

	for (int i = 1; i < argc; i++)
	{
		num1 = 0;
		for (int c = 0; argv[i][c]; c++)
		{
			if ((argv[i][c] <= '9') && (argv[i][c] >= '0'))
				num1 = (num1 * 10) + (argv[i][c] - '0');
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		num2 += num1;
	}
	printf("%d\n", num2);
        return (0);
}
