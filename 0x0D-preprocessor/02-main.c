#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
