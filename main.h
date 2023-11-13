#ifndef HEADER_PRINTF
#define HEADER_PRINTF

#include <stdarg.h>

/**
 * struct pfunc_t - printing functions and their identifiers
 * @spec: format specifier
 * @fun: print function
 */
typedef struct pfunc_t
{
	char *spec;
	int (*func)(va_list);
} pfunc_t;

/*
 * Utils
 */
int _strlen(char *str);

/*
 * Utils, parsers
 */
int ppchar(va_list);
int ppstr(va_list);
int ppnum(va_list);

/*
 * Print functions
 */
int put_char(char c);
int print_str(char *str);
int print_num(int n);

/*
 * core, printf
 */
int _printf(const char *format, ...);

#endif
