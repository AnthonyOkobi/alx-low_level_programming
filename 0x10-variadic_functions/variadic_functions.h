#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
* int sum_them_all - function that returns the sum of all parameters
*/

typedef struct format 
{
char *f;
void (*func)(va_list vargs);
} form;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const, ...);


#endif
