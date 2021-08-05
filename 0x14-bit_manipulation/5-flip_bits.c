#include "main.h"
/**
 *flip_bits- a
 *@n: a
 *@m: a
 *Return: a
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int out;

	num = n ^ m;
	out = 0;
	while (num)
	{
		out += num & 1;
		num /= 2;
	}
	return (out);
}
