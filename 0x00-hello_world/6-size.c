#include <stdio.h>
/**
 * main - finding the size of type
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i byte(S)\n", sizeof(char));
	printf("Size of a int: %i byte(S)\n", sizeof(int));
	printf("Size of a long int: %i byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(S)\n", sizeof(long long int));
	printf("Size of a float: %i byte(S)\n", sizeof(float));
	return (0);
}
