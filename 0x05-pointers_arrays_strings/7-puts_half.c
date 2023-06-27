#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int x, n, write;
write = 0;
for (x = 0; str[x] != '\0'; x++)
{
write++;
}
n = (write / 2);
if ((write % 2) == 1)
{
n = ((write + 1) / 2);
}
for (x = n; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
