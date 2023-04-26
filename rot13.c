#include "main.h"
/**
 * write_rot13 - converts string to rot13 and writes to stdout
 *@string: string
 *Return: rot13'ed string
 */
int write_rot13(va_list string)
{
	int j = 0;
	int m = 0;
	char *str;
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(string, char *);
	if (str == NULL)
		return (-1);
	while (str[j] != '\0')
	{
		while (m <= 52)
		{
			if (str[j] == n[m])
			{
				print(r[m]);
				break;
			}
			m++;
		}
		if (m == 53)
			print(str[j]);

		j++;
	}

	return (j);
}
