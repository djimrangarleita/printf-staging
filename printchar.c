#include "main.h"
#include <unistd.h>

/**
 * ppchar - extract char from @va_list
 * @ap: ptr to list of args
 * Return: int, number of printed chars
 */
int ppchar(va_list ap)
{
	int count;

	count = put_char(va_arg(ap, int));

	return (count);
}

/**
 * put_char - print a single char to stdout
 * @c: the char to be printed
 * Return: number of printed chars
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
