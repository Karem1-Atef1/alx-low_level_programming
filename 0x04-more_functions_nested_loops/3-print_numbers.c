#include <unistd.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *                 only use _putchar twice
 * Return: always (0) (success)
 */
void print_numbers(void)
{int i;
for (i = 48; i <= 57; i++)
_putchar(i);
_putchar('\n');
}
