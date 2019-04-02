#include "holberton.h"

/**
 * *_memeset - prints buffer in hexa
 * @c: the address of memory to print
 * @s: the size of the memory to print
 *
 * Return: s + 1.
 */
char *_strchr(char *s, char c)
{
	for(s = 0;*s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (s[1] == c)
			return s[1];

	}
        return s[1];
	return (NULL);
}
