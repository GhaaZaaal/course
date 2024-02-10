#include "main.h"
/**
 * print_binary - Fucntion to print a decimal in binary without using / , %
 *
 * @n: the number to be converted
 */
void print_binary(unsigned long int n)
{
	int n_bits = 0, i, j;
	unsigned long int max_bits = 1, to_count_bits = n;

	while (to_count_bits != 0)
	{
		to_count_bits >>= 1;
		n_bits++;
	}
	for (i = 0; i < n_bits; i++)
	{
		if (i == 63)
		{
			max_bits = (max_bits * 2) - 1;
			break;
		}
		max_bits *= 2;
	}
	if (n <= 0)
	{
		putchar('0');
	}
	else
	{
		for (j = 0; j < n_bits; j++)
		{
			if (n & max_bits)
			{
				putchar('1');
			}
			else
			{
				putchar('0');
			}
			max_bits >>= 1;
		}
	}
}
