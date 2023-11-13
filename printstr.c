#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * ppstr - parse and print string from va_list
 * @ap: arg ptr to string
 * Return: int, number of printed chars
 */
int ppstr(va_list ap)
{
	int count;

	count = print_str(va_arg(ap, char *));

	return (count);
}

/**
 * print_str - print a string pointed to by @str
 * @str: ptr to string
 * Return: int, number of printed chars
 */
int print_str(char *str)
{
	int len;

	len = _strlen(str);

	return (write(1, str, len));
}
