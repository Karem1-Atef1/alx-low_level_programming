#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 . not 2 and
 *                 only use _putchar twice
 * Return: always (0) (success)
 */
void print_most_numbers(void)
{int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
