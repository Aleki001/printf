## printf
This project aims to create a custom `printf` function in C that works similarly to the standard `printf` function. The custom `printf` function can handle various conversion specifiers and flag characters for non-custom conversion specifiers such as `+`, `space`, and `#`.

## Getting Started

To use the custom `printf` function in your C program, you can include the header file `main.h` and call the function `printf` as follows:

```c
#include "main.h"

int main()
{
    _printf("Hello, World!\n");
    return 0;
}
```

## Conversion Specifiers

The custom `printf` function supports the following conversion specifiers:

| Conversion Specifier | Description |
|---------------------|-------------|
| `%c` | Character |
| `%s` | String |
| `%d` | Decimal integer |
| `%i` | Integer |
| `%b` | Binary |
| `%o` | Octal |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal integer (lowercase) |
| `%X` | Hexadecimal integer (uppercase) |
| `%p` | Pointer |
| `%r` | Reverse string |
| `%R` | ROT13 encoding |

## Flag Characters

The custom `printf` function supports the following flag characters for non-custom conversion specifiers:

| Flag Character | Description |
|----------------|-------------|
| `+` | Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. |
| `space` | If no sign is going to be written, a blank space is inserted before the value. |
| `#` | Used with o, b, x, or X specifiers, the value is preceded with 0, 0b, 0x, or 0X respectively for values different than zero. |

## Implementation

The `select_format` function in the `main.h` header file finds the corresponding conversion function for a given conversion specifier. The `write_int` function in the `write_int.c` file handles the `%d` and `%i` conversion specifiers and applies the flag characters if they are set.

## Conclusion

This project demonstrates how to create a custom `printf` function in C that supports various conversion specifiers and flag characters. With this custom function, you can format and print output to the console in a customized way to suit your needs.

## Authors
- Alex Kinyua
- Edwin Irungu
