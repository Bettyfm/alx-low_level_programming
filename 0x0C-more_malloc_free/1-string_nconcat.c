#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concates 2 strings
 * @s1: ptr to first string
 * @s2: ptr to second string
 * @n: number of bytes allocated
 * Return: NULL when fail ptr if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int i;
	unsigned int k;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	st = malloc(len1 + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		st[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		st[i] = s2[k];
		i++;
	}
	st[i] = '\0';
	return (st);
}
