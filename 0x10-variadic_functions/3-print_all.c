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
	int i, i1;
	char *muestra = "cifs";
	char ch;
	int in;
	float fl;
	char *st;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		i1 = 0;
		while (muestra[i1])
		{
			if (format[i] == muestra[i1])
			{
				switch (format[i])
				{
				case ('c'):
					ch = va_arg(args, int);
					putchar(ch);
					break;
				case ('i'):
					in = va_arg(args, int);
					printf("%d", in);
					break;
				case ('f'):
					fl = va_arg(args, double);
					printf("%f", fl);
					break;
				case ('s'):
					st = va_arg(args, char *);
					printf("%s", st);
					break;
				default:
					break;
				}
				if (format[i + 1])
					printf(", ");
			}
			i1++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
