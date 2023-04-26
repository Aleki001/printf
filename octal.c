#include "main.h"
/**
 * print_octal - writes an octal no to stdout
 * @octal: octal no to print
 * Return: size
 */
int write_octal(va_list octal)
{
	unsigned int digit, number, n, i;
	unsigned int length = 0, count = 0, powTen = 1;

	n = va_arg(octal, unsigned int);

	number = n;

	if (n != 0)
	{
		while (number != 0)
		{
			number /= 8;
			length++;
		}
		for (i = 1; i <= length - 1; i++)
	{
			powTen *= 8;
	}

		for (i = 1; i <= length; i++)
		{
			digit = n / powTen;
			print(digit + '0');
			count++;

			n -= digit * powTen;

			powTen /= 8;
		}
	}
	else
	{
		print('0');
		return (1);
	}

	return (count);
}
