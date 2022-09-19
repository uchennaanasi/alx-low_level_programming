#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
*print_rev - Prints to stdout in reverse
* @s: string
* Return: Length of string
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	while (len > 0)
	{
		printf("%c", s[len]);
		len--;
	}
	printf("\n");
}
