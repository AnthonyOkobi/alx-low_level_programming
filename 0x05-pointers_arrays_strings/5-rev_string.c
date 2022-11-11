#include "main.h"

/**
* rev_string - reverse strings
* @s: char
*
* Return: String
*/
void rev_string(char *s)
{
int i = 0;
int j;
char c;
char d;

while (s[i] != '\0')
{
i++;
}
i--;
for (j = 0; j < i; j++)
{
c = s[j];
d = s[i];
s[j] = d;
s[i] = c;
i--;
}
}
