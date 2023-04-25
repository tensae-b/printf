#include "main.h"

/**
 * print_string - writes the string to stdout
 * @s: string to be printed
 * Return: 1 if successful
 */
int print_string(va_list s)
{
	char *print_string;
	int  i = 0;

	print_string = va_arg(s, char *);

	if (print_string == NULL)
		print_string = "(null)";
	while (print_string[i])
	{
		_putchar(print_string[i]);
		i++;
	}
	return (i);
}
