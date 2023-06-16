#include <stdio.h>
/**
 * main - Entry pont of the program.
 *
 * * This program prints the size of various computer types.
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int k;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
