#include <stdlib.h>
#include <stddef.h>

/**
 *string_nconcat - a
 *@s1 : aa
 *@s2 : aa
 *@n : aa
 *
 *Return: none
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int len1, len2, i1, i2 = 0;

	if (s1)
		len1 = sizeof(s1) +2;
	if (s2)
		len2 = sizeof(s2);
	if (n < len2)
		len2 = n;
	p = malloc(len1 + len2);
	if (p)
	{
		for (i1 = 0; (i1 < len1) && s1; i1++)
			p[i1] = s1[i1];
		for (i2 = 0; (i2 < len2) && s2; i2++)
			p[i1 + i2] = s2[i2];
		p[i1 + i2] = 0;
	}
	return (p);
}
