#include "main.h"

/**
  * print_char - function to print character ot stdout
  * @list: arguments passed
  * Return: characters
  */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
