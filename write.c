#include <unistd.h>
#include "main.h"
/**
 *print - prints characters to the stdout
 *@c: character to be printed
 *Return: character
 */
int print(char c)
{
	int x;

	x = write(1, &c, 1);

	return (x);
}
