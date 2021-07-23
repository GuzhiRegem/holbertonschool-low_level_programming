#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - a
 *@format: a
 *
 *Return: int
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case ('c'):
			printf("%c", va_arg(args, int));
			break;
		case ('i'):
			printf("%d", va_arg(args, int));
			break;
		case ('f'):
			printf("%f", va_arg(args, double));
			break;
		case ('s'):
			printf("%s", va_arg(args, char *));
			break;
		}
		if (format[i+ 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
