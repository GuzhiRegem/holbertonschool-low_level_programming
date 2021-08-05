/**
 *binary_to_uint - a
 *@b: a
 *Return: a
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (num);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
			num *= 2;
		if (b[i] == '1')
			num = (num * 2) + 1;
	}
	return (num);
}
