#include <unistd.h>
#include "main.h"
/**
 * more_numbers - prints the numbers, from 0 to 14 . 10 times
 *                 only use _putchar three times
 * Return: always (0) (success)
 *
 */
void more_numbers(void)
{
int i;
int h;
int v;
i = 9;
while (i--)
{
for (h = 0, v = 0; v <= 14; v++)
{
if (h % 10 == 0)
h = 0;
if (v > 9)
_putchar (49);
_putchar (h + 48);
h++;
}
_putchar ('\n');
}
}
