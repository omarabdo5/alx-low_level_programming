#include <stdio.h>

/*
 * main - Entry Point
 *
 * Description: using sizeof to print the size of various types
 *
 * Return: Always 0 (Success)
*/
int main(void)

{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));
	return (0);

}
