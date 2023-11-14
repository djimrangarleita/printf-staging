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
	int (*func)(va_list, char *);
} pfunc_t;

/*
 * Utils
 */
int _strlen(char *str);

/*
 * Utils, parsers
 */
int ppchar(va_list, char *format);
int ppstr(va_list, char *format);
int ppnum(va_list, char *format);
int pprev(va_list, char *format);
int pprot13(va_list, char *format);
int ppbnum(va_list, char *format);

/*
 * Print functions
 */
int put_char(char c);
int print_str(char *str, int len);
int print_num(long long int n);
int printb_num(unsigned int n, int base, char *spec);

/*
 * core, printf
 */
int _printf(const char *format, ...);

#endif
