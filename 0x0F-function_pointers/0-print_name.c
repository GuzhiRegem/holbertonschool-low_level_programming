/**
 *print_name - a
 *@name: a
 *@f: a
 *
 *Return: a
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
