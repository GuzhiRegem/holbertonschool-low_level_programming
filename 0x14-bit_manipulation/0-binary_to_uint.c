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
		if (b[i] == '1' || b[i] == '0')
		{
			num *= 2;
			num += (b[i] == '1');
		}
		else
			return ((unsigned int)0);
	}
	return (num);
}
