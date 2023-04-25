#include "main.h"
#include <stdio.h>

/**
 * reverse_string - string will be reversed
 * @s: reversed string
 * Return: pointer to a charcater
 */
char *rev_string(char *s)
{
	int length;
	int head;
	char tmp;
	char *destination;

	for (length = 0; s[length] != '\0'; length++)
	{}

	destination = malloc(sizeof(char) * length + 1);
	if (destination == NULL)
		return (NULL);

	_memcpy(destination, s, length);
	for (head = 0; head < length; head++, length--)
	{
		tmp = destination[length - 1];
		destination[length - 1] = destination[head];
		destination[head] = tmp;
	}
	return (destination);
}

/**
 * write_base - characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * base_len - calculates octal length number
 * @num: number whose length will be calculated
 * @base: base who will be calculated
 * Return: int representing length
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 *_memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
			dest[i] = src[i];
		dest[i] = '\0';
		return (dest);
}

