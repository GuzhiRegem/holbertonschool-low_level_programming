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
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *p = NULL;
	int len1, len2, i1, i2 = 0;

	if (s1)
		len1 = sizeof(s1) - 1;
	if (s2)
		len2 = sizeof(s2) - 1;
	if (n < len2)
		len2 = n;
	p = malloc(len1 + len2 + 1);
	if (p)
	{
		for (; (i1 <= len1) && s1; i1++)
			p[i1] = s1[i1];
		for (; (i2 <= len2) && s2; i2++)
			p[i1 + i2] = s2[i2];
		p[i1 + i2] = 0;
	}
	return (p);
}
