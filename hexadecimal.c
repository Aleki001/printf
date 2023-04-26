#include "main.h"
/**
* write_X - writes int to uppercase hexadecimal
* @X: int
* Return: size
*/
int write_X(va_list X)
{
	return (write_hex(va_arg(X, unsigned int), 1));
}

/**
* print_x - writes int to lowercase hexadecimal
* @x: int
* Return: size 
*/
 int write_x(va_list x)            
{
	return (write_hex(va_arg(x, unsigned int), 0));
}

/**
* write_hex - writes hexadecimal
* @n: unsigned to be printed
* @flag: case of printing (0 = lower, 1 = upper)
* Return: size the output
*/
int write_hex(unsigned int integer, unsigned int flag)
{
	unsigned int length = 0, powTen, i, digit, num;
	int count = 0;
	char change;
    num = integer;

	if (integer != 0)
	{
		if (flag)
			change = 'A' - ':';
		else
			change = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			length++;
		}
		powTen = 1;
		for (i = 1; i <= length - 1; i++)
			powTen *= 16;
		for (i = 1; i <= length; i++)
		{
			digit = integer / powTen;
			if (digit < 10)
				print(digit + '0');
			else
				print(digit + '0' + change);
			count++;
			integer -= digit * powTen;
			powTen /= 16;
		}
	}
	else
	{
		print('0');
		return (1);
	}
	return (count);
}

