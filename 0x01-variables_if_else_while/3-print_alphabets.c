#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}
