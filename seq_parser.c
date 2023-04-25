#include "main.h"
/**
* sequence_parser - receives the main string and all the necessary parameters
* @format: string containing all the desired characters.
* @spec_list: list of all the posible functions
* @args: list containing all the argumentents passed
* Return: total count of printed characters
*/
int seq_parser(const char *format, form_spec spec_list[], va_list args)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; spec_list[j].op != NULL; j++)
			{
				if (format[i + 1] == spec_list[j].op[0])
				{
					r_val = spec_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (spec_list[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	return (printed_chars);
}
