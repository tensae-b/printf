#include "main.h"

/**
  * _printf - a user built-in printf
  * @format: input specifier
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int num;

	form_spec spec_list[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", print_rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	num = seq_parser(format, spec_list, args);
	va_end(args);
	return (num);
}
