#include <unistd.h>
#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 *                 only use _putchar
 *
 * @n: input long line
 *
 * Return: always (0) (success)
 *
 */
void print_line(int n)
{
if (n > 0)
{
for ( ; n > 0; n--)
_putchar('_');
}
_putchar('\n');
}
