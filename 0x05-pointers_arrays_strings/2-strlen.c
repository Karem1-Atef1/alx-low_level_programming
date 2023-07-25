#include <unistd.h>
#include "main.h"
/**
 * _strlen - length of a string.
 *
 * @s: input for alphabet
 *
 * Return: return counter
 */
int _strlen(char *s)
{
int counter;
counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
