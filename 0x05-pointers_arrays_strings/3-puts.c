#include <unistd.h>
#include "main.h"
/**
 * _puts - length of a string.
 *
 * @str: input for alphabet
 *
 * Return: return 0
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
