#include "holberton.h"

void (*verify_format(char *s))()
{
	pf_s ops[] = {
		{'%', print_percent},
		{'c', print_char},
		{'s', print_string}
	};
	int i, ops_len = sizeof(ops) / sizeof(pf_s);
	char *p = s;
	p++;

	if (*p != '\0')
	{
		for (i = 0; i < ops_len; i++)
		{
			if ( ops[i].s == *p)
				return (ops[i].f);
		}
	}
	return (NULL)
}
