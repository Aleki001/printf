#include "main.h"
/**
 * write_bin - writes a binary to stdout
 * @bin: binary to print
 * Return: size
 */
int write_bin(va_list bin)
{
	unsigned int digit, number, n, i;
	unsigned int length = 0, count = 0, powTen = 1;

	n = va_arg(bin, unsigned int);
	number = n;
	if (n != 0)
	{
		while (number != 0)
		{
			number /= 2;
			length++;
		}
		for (i = 1; i <= length - 1; i++)
			powTen *= 2;
		for (i = 1; i <= length; i++)
		{
			digit = n / powTen;
			print(digit + '0');
			count++;
			n -= digit * powTen;
			powTen /= 2;
		}
	}
	else
	{
		print('0');
		return (1);
	}
	return (count);
}
