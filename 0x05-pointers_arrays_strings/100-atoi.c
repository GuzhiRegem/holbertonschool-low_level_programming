/**
 *_atoi - coso
 *@s : a
 *
 *Return : int
 */
int _atoi(char *s)
{
	int sign, number, c, after, _after;

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
			else if (after && (s[c] == '-'))
				sign *= -1;
			else if (((s[c] >= 'a') && (s[c] <= 'z'))
				 || ((s[c] >= 'A') && (s[c] <= 'Z')))
				_after = 0;
		}
	}
	return (sign * number);
}
