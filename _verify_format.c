#include "holberton.h"

/**
 * verify_format - Verifies formats
 * Description: This function verifies formats
 * @s: String to verify
 * Return: A function to execute
 */
int (*verify_format(const char *s))()
{
	pf_s ops[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"r", print_r},
		{"p", print_p},
		{"R", print_R}
	};
	int i, ops_len = sizeof(ops) / sizeof(pf_s);
	const char *p = s;

	p++;

	if (*p != '\0')
	{
		for (i = 0; i < ops_len; i++)
		{
			if (ops[i].s[0] == p[0])
				return (ops[i].f);
		}
	}
	return (NULL);
}
