#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 * @s : check
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
				break;
			}
			j++;
		}
			i++;
	}
	return (s);
}
