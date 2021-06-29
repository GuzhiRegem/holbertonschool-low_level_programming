/**
 *_atoi - coso
 *@s : a
 *
 *Return: int
 */
int _atoi(char *s)
{
	double number;
	int sign, c, after, _after, out;

	sign = 1;
	number = 0;
	after = 1;
	_after = 1;
	for (c = 0; s[c]; c++)
	{
		if (_after)
		{
			if ((s[c] >= '0') && (s[c] <= '9'))
			{
				after = 0;
				number *= 10;
				number += (s[c] - '0');
			}
		}
		if (after && (s[c] == '-'))
			sign *= -1;
		if ((((s[c] >= 'A') && (s[c] <= 'Z')) ||
		     ((s[c] >= 'a') && (s[c] <= 'z'))) && (after == 0))
			_after = 0;
	}
	number *= sign;
	out = number;
	return (out);
}
