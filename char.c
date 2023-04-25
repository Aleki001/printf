#include "main.h"
/**
 * write_char - writes characters to the stdout
 * @ch: character
 * Return: (1)
*/
int write_char(va_list ch)
{
    char character;

    character = va_arg(ch, int);
    print(character);

    return (1);
}
