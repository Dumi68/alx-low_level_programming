#include "main.h"
/**
 * swap_int - swaps values of 2 ints
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
