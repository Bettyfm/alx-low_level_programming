#include "lists.h"
int _strlen( char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght = lenght + 1;
		s = s + 1;
	}
	return (lenght);
}
