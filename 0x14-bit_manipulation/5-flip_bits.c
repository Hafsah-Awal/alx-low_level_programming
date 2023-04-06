#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int a, b;

	a = 0;
	result = 1;
	differnce = n ^ m;
	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (result == (differnce & result))
			a++;
		result <<= 1;
	}

	return (a);
}
