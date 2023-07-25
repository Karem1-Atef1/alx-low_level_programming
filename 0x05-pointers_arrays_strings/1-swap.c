#include <unistd.h>
#include "main.h"
/**
 * swap_int - swap two number
 *
 * @a: frist input
 * @b: scond input
 *
 * Return: return 0
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
