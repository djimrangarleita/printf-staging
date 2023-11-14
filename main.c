#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    len = _printf("LLINT:[%d]\n", LLONG_MAX);
    len2 = printf("LLINT:[%lld]\n", LLONG_MAX);
    printf("_printf:[%d] printf[%d]\n", len, len2);
    len = _printf("Print null:[%s]\n", (char *)NULL);
    len = _printf("Print null:[%s]\n", (char *)NULL);
    len = _printf("Print null:[%s]\n", "");
    len2 = printf("Print null:[%s]\n", "");
    printf("Len of null min:[%d]\n", len);
    printf("Len of null min:[%d]\n", len2);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    printf("The ui num: [%u]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = _printf("Print binary:[%b]\n", 98);
    _printf("Count of bin is %d\n", len);
    len = _printf("Character:[%%%%%c]\n", 'H');
    len2 = printf("Character:[%%%%%c]\n", 'H');
    _printf("String:[%ss]\n", "I am a string !");
    _printf("String:[%ss]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("1 percent:[%]\n");
    len = printf("1 percent:[%]\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);


    _printf("Print rev:[%r]\n", "Try reverse me!");
    len = _printf("ROT13:[%R]\n", "#cisfun");
    printf("Len:[%d]\n", len);

    return (0);
}
