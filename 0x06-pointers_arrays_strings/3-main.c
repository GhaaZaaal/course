#include "main.h"
#include <stdio.h>

/**
 * main - C program that compares twi strings
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}