#include "main.h"

/**
 * * print_unsigned_number - prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: length of numbers printed
 */
int print_unsigned_number(unsigned int n)
{
	int div;
	int num_length;
	unsigned int num;

	div = 1;
	num_length = 0;
	num = n;

	for (; num / div > 9; )
		div *= 10;
	for (; div != 0;)
	{
		num_length += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (num_length);
}
/**
 * unsigned_integer - prints Unsigned integers
 * @list: list of all of the argumets
 * Return: the unsigned numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
