#include "main.h"
/**
 * print_alphabet_x10 - Fuction that prints 10 time the alphabet
 *                      in lowercase, followed by new line.
 *
 */
void print_alphabet_x10(void)
{
int x = 0;
char y;
while (x < 10)
{
y = 'a';
while (y <= 'z')
{
_putchar(y);
y++;
}
_putchar('\n');
x++;
}
}
