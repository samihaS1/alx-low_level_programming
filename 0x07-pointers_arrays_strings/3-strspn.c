i#include "main.h"
/**
 * _strspn - Entry point
 * @i: input
 * @a: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *i, char *a)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; a[r]; r++)
		{
			if (*i == a[r])
			{
				n++;
				break;
			}
			else if (a[r + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);
}

