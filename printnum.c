#include "main.h"

/**
 * ppnum - parse and print number @n
 * @ap: pointer to arg of type int
 * Return: number of printed chars
 */
int ppnum(va_list ap)
{
	int count;

	count = print_num(va_arg(ap, int));

	return (count);
}

/**
 * print_num - print number @n
 * @n: the number to print
 * Return: number of printed chars
 */
int print_num(long long int n)
{
	int lastdigit, sign = 1, count = 0;
	if (n < 0)
	{
		lastdigit = n % 10;
		n /= -10;
		sign = -1;
		count += put_char('-');
	}

	if (n / 10)
	{
		count += print_num(n / 10);
	}
	if (n != 0 || sign > 0)
	{
		count += put_char(n % 10 + '0');
	}
	if (sign < 0)
	{
		count += put_char('0' - lastdigit);
	}

	return(count);
}
