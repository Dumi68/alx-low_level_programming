#include "main.h"
/**
 * _strncat - joins/concatenate two strings
 * using at most n bytes from src
 * @dest: end product of string
 * @src: source string
 * @n: input value
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int c;
x = 0;
while (dest[x] != '\0')
{
x++;
}
c = 0;
while (c < n && src[c] != '\0')
{
dest[x] = src[c];
x++;
c++;
}
dest[x] = '\0';
return (dest);
}
