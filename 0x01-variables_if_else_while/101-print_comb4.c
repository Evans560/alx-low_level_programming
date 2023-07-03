#include <stdio.h>

/**
 * main - Prints all possible different combinations of four digits.
 * Return: Always 0 (Success).
 */
int main(void)
{
int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
for (l = k + 1; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
putchar(k + '0');
putchar(l + '0');

if (!(i == 6 && j == 7 && k == 8 && l == 9))
printf(", ");
}
}
}
}

putchar('\n');

return (0);
}
