#include "main.h"
/**
 * _strcat - joins/concatenates two strings
 * @dest: end product of string
 * @src: source string
 * Return: A pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int x;
int c;
x = 0;
while (dest[x] != '\0')
{
x++;
}
c = 0;
while (src[c] != '\0')
{
dest[x] = src[c];
x++;
c++;
}
dest[x] = '\0';
return (dest);
}
