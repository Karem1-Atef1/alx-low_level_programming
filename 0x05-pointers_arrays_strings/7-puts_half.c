#include <unistd.h>
#include "main.h"
/**
 * puts_half - length of a string.
 *
 * @str: input for alphabet
 *
 * Return: return 0
 */
void puts_half(char *str)
{
int i;
for (i = 1; str[i] != '\0'; i++)
   ;

for (i = i / 2; str[i] != '\0'; ++i) 
_putchar(str[i]);
_putchar('\n');
}
