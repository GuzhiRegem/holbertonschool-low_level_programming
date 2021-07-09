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
	int cents, amount, i = 0;
	int coins[] = {25, 10, 5, 2, 1};


	if (argc == 2)
	{
		cents = atoi(argv[1]);
		amount = 0;
		for (; (cents % coins[i]) != 0; i++)
		{
			amount += (cents / coins[i]);
			cents = cents % coins[i];
		}
		amount += cents / coins[i];
		if ((atoi(argv[1])) < 0)
			amount = 0;
		printf("%d\n", amount);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
