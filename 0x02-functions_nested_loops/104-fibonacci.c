#include <stdio.h>
/**
 * main - main block
 * Description: computes & prints the sum of the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
