#include "main.h"
/**
 * rev_string - reversing a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
char str_rev = s[0];
int write = 0;
int x;
while (s[write] != '\0')
{
write++;
}
for (x = 0; x < write; x++)
{
write--;
str_rev = s[x];
s[x] = s[write];
s[write] = str_rev;
}
}
