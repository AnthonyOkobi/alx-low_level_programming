#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int a = 0;
int b;
int d;

while (a < 10)
{
b = 0;
while (b < 10)
{
d = a * b;
if (d > 9)
{
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');
}
else if (b != 0)
{
_putchar(' ');
_putchar(d + '0');
}
else
{
_putchar(d + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
