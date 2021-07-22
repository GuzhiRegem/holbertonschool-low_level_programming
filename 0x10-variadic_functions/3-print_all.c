#include <stdarg.h>
#include <stdio.h>

/**
 *print_char - a
 *@c: a
 *
 *Return: int
 */
void print_char(char c)
{
	putchar(c);
}
/**
 *print_int - a
 *@c: a
 *
 *Return: int
 */
void print_int(int c)
{
	printf("%d",c);
}
/**
 *print_float - a
 *@c: a
 *
 *Return: int
 */
void print_float(float c)
{
        printf("%f",c);
}
/**
 *print_string - a
 *@c: a
 *
 *Return: int
 */
void print_string(char *c)
{
	printf("%s",c);
}
/**
 *print_all - a
 *@format: a
 *
 *Return: int
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char ch;
	int in;
	float fl;
	char *st;
	int i, i1;
	char *form = "cifs";

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		i1 = 0;
		while (form[i1])
		{
			if (format[i] == form[i1])
			{
				switch (format[i])
				{
				case 'c':
					ch = va_arg(args, char);
					print_char(ch);
					break;
				case 'i':
					in = va_arg(args, int);
					print_int(in);
					break;
				case 'f':
					fl = va_arg(args, float);
					print_float(fl);
					break;
				case 's':
					st = va_arg(args, char *);
					print_string(st);
					break;
				}
				break;
			}
		}
	}
	va_end(args);
	printf("\n");
}
