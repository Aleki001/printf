#include "main.h"
/**
 * write_dec - writes a decimal to stdout
 * @dec: decimal to print
 * Return: size
 */
int write_dec(va_list dec)
{
	int digit, number, n, i;
	int length = 0, count = 0, powTen = 1;

	n = va_arg(dec, int);

	if (n != 0)
	{
		if (n < 0)
		{
			print('-');
			count++;
		}
		number = n;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		for (i = 1; i <= length - 1; i++)
			powTen *= 10;
		for (i = 1; i <= length; i++)
		{
			digit = n / powTen;
			if (n < 0)
				print((digit * -1) + '0');
			else
				print(digit + '0');
			count++;
			n -= digit * powTen;
			powTen /= 10;
		}
	}
	else
	{
		print('0');
		return (1);
	}
	return (count);
}
