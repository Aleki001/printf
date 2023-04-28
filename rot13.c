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
	int count = 0;
	char *str;
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		m = 0;
		while (n[m] != '\0')
		{
			if (str[j] == n[m])
			{
				print(r[m]);
				count++;
				break;
			}
			m++;
		}
		if (n[m] == '\0')
		{
			print(str[j]);
		}

		j++;
	}

	return (count);
}
