#include <unistd.h>
#include "main.h"
/**
 * print_rev - length of a string.
 *
 * @s: input for alphabet
 *
 * Return: return 0
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
