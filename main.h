#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct converter - used for functions and symbols to be defined
 * @op: the operator
 * @f: function associated
 */
struct converter
{
	char *op;
	int (*f)(va_list);
};

typedef struct converter form_spec;

int _putchar(char);
int seq_parser(const char *format,
form_spec spec_list[], va_list args);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_reversed(va_list list);
int print_rot13(va_list list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif
