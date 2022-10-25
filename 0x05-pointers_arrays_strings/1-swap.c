#include "main.h"

/**
* swap_int - swaps the value of two intergers
* @a: take an int
* @b: take sn int
*/
void swap_int(int *a, int *b)
{
int i = *a;

*a = *b;
*b = i;
}
