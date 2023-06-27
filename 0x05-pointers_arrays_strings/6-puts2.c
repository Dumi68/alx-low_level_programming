#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 * Return: output
 */
void puts2(char *str)
{
int write = 0;
int x = 0;
char *y = str;
int m;
while (*y != '\0')
{
y++;
write++;
}
x = write - 1;
for (m = 0; m <= x; m++)
{
if (m % 2 == 0)
{
_putchar(str[m]);
}
}
_putchar('\n');
}
