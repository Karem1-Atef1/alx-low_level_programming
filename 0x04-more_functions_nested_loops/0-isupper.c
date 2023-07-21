#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90 )
return (1);
else if (c >= 97 && c <= 122)
return (0);
return (0);
}
