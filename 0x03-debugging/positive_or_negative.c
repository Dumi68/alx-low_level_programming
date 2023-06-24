#include "main.h"
/**
 * print_sign - outputs the sign of the number
 * @n: the number to check
 * Return: 1 and print + if n > 0
 * 0 and print 0 if n = 0
 * -1 and print - if n < 0
 */

void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return;
}
