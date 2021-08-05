#include "main.h"
#include <stdint.h>
/**
 *get_endianness- a
 *Return: a
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0] == 1)
}
