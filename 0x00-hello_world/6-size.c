#include <stdio.h>

/**
 * main: Entry - point
 *
 * Description: printf(\"Size of a %lu byte(s)\n\",sizeof(the type of char));
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(long long int));
	return (0);
}
