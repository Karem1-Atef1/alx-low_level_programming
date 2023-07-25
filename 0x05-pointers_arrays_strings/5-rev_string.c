#include <unistd.h>
#include "main.h"
/**
 * rev_string - length of a string.
 *
 * @s: input for alphabet
 *
 * Return: return 0
 */
void rev_string(char *s)
{
int i, h;
i = 0;
h = 0;
char temp;
while (s[i] != '\0')
i++;
while (h < i / 2)
{
temp = s[i-1-h];
s[i-1-h] = s[h];
s[h] = temp;
h++;
}
}
