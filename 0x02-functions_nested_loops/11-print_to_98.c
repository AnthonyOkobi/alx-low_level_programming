#include <stdio.h>
#include "main.h"
<<<<<<< HEAD

/**
 *print_to_98 - a fuction that prints all natural numbers from n
 *to 98
 *user input's number prints to 98
 *@n: number input
=======
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: starting point
>>>>>>> 2d4960f8bda8fc624355979631314607e477e066
 *Return: 0
 */
void print_to_98(int n)
{
<<<<<<< HEAD
int a, b;
if (n <= 98)
{
for (a = n; a <= 98; a++)
{
if (a != 98)
printf("%d", ", a);
else if (a == 98)
printf("%d"\n", a);
}
} else if (n >= 98)
{
for (b = n; b >= 98; b++)
{
if (b != 98)
printf("%d",",b);
else if (b == 98)
printf("%d"\n", b);
}
}
}
=======
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
printf("\n");
}

>>>>>>> 2d4960f8bda8fc624355979631314607e477e066
