void print_percen(char *s)
{
	_putchar('%');
}

void print_char(char *s)
{

}

void print_string(char *s)
{
	char *s = va_arg(args, char *);
	int len = strlen(s);

	write(1, s, len);
}
