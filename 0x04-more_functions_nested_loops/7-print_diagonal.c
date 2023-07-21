#include <unistd.h>
#include "main.h"
/**
 * print_diagonal -  draws a diagonal line in the terminal
 *                 only use _putchar
 *
 * @n: input long line
 *
 * Return: always (0) (success)
 *
 */
void print_diagonal(int n)
{
int i, h;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (h = 0; h < i; h++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}

