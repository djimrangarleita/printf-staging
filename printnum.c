#include "main.h"

/**
 * ppnum - parse and print number @n
 * @ap: pointer to arg of type int
 * Return: number of printed chars
 */
int ppnum(va_list ap, char *spec)
{
	int count;

	count = print_num(va_arg(ap, int));

	return (count);
}

int ppbnum(va_list ap, char *spec)
{
	int n = va_arg(ap, unsigned int);
	int count;

	switch (*spec)
	{
		case 'b':
			count = printb_num(n, 2, spec);
			break;
		case 'x':
			count = printb_num(n, 16, spec);
			break;
		case 'X':
			count = printb_num(n, 16, spec);
			break;
		case 'o':
			count = printb_num(n, 8, spec);
			break;
		default:
			count = printb_num(n, 10, spec);
	}

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

/**
 * printb_num - print a num @n of base @b
 * @n: num to be printed
 * @b: base num to use for printing
 * @spec: char ptr to format specifier
 * Return: number of printed chars
 */
int printb_num(unsigned int n, int base, char *spec)
{
	int count = 0;
	const char *equiv = "0123456789abcdef";
	
	if (n < base)
	{
		if (n > 9 && *spec == 'X')
			return put_char(equiv[n] - 32);
		else
			return put_char(equiv[n]);
	}
	else
	{
		count = printb_num(n / base, base, spec);
		return count + printb_num(n % base, base, spec);
	}
}
