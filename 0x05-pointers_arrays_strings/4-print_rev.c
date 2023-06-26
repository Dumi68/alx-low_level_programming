#include "main.h"
/**
 * print_rev - function that prints string in reverse, followed by new line
 * @s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
int string = 0;
int n;
while (*s != '\0')
{
string++;
s++;
}
s--;
for (n = string; n > 0; n--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
