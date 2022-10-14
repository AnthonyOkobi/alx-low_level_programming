#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabet in lowercase and uppercase.
 *
 * Return: 0
 **/
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(c);
	putchar('\n');
	return (0);
}
