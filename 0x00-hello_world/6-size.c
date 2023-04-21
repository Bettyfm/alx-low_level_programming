#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char:%i\n", sizeof(char));
	printf("Size of an int:%i\n", sizeof(int));
	printf("size of a long int:%i\n", sizeof(long int));
        printf("size of a long long int:%i\n", sizeof(long long int));
	printf("Size of a float:%i\n", sizeof(float));
	return (0);
}
