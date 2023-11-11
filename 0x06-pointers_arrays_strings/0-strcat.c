#include "main.h"

/**
 * _strcat - string concatinate func
 * @dest: string destination of concate
 * @src: string source to be concatinated
 * Return: ptr to final string
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = _strlen(dest);

	for (m = 0; src[m]; m++)
	{
		dest[n] = src[m];
			n++;
	}

}

/**
 * _strlen - function that print the length of string
 * @s: string char
 *
 * Return: lenght (success)
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght = lenght + 1;
		s = s + 1;
	}
	return (lenght);
}
