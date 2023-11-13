#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - mini C printf function clone, personnalized
 * @format: char ptr to list of format specifiers
 * @...: array of arguments to print, va_list
 * Return: int representing the number of printed chars
 */
int _printf(const char *format, ...)
{
	pfunc_t pfuncs[] = {
		{"c", ppchar},
		{"s", ppstr},
		{"d", ppnum},
		{"i", ppnum},
		{NULL, NULL}
	};
	va_list ap;
	int i, j, count;

	va_start(ap, format);

	i = 0;
	count = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (pfuncs[j].spec != NULL)
			{
				if (format[i] == *(pfuncs[j].spec))
				{
					count += pfuncs[j].func(ap);
					break;
				}
				j++;
			}
			if (pfuncs[j].spec == NULL)
			{
				count += put_char(format[i]);
			}
		}
		else
		{
			count += put_char(format[i]);
		}
		
		i++;
	}

	return (count);
}
