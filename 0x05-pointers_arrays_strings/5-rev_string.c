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
int i, l;
char temp;
for (l = 0; s[l] != '\0'; ++l)
	;
for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}
