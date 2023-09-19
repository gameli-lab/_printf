#include "main.h"

/**
 * handle_char - the function takes one argument
 * @args: the argument being passed
 * Return: 1 to the standard output
 */
<<<<<<< HEAD
int function_for_char(va_list args)
=======
int handle_char (va_list args)
>>>>>>> b789cb871917f8f89247f30522a2624e81d3f268
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * handle_string - its a function that handles the strings
 * @args: the argument being passed
 * Return: the length of the string
 */
int function_for_string(va_list args)
{
	int str_len;

	char *str = va_arg(args, char *);

<<<<<<< HEAD
	int len = 0;
=======
	if (str == NULL)
	{
		return (0);
	}
	str_len = 0;
>>>>>>> b789cb871917f8f89247f30522a2624e81d3f268

	while (str[len] != '\0')
		len++;
	write(1, str, len);
		return (len);
}
/**
 * conversion_specifiers - handles custom conversion specifiers
 * @args: the list of arguments
 * Return: the conversion specifier
 */
int conversion_specifiers(va_list args)
{
	int n = va_arg(args, int);

	int i;

	int binary[33];

	binary[32] = '\0';

	for (i = 31; i >= 0; i--)
	{
		binary[i] = (n & 1) ? '1' : '0';
		n >>= 1;
	}

	write(1, binary, 32);
	return (32);
}
/**
 * handle_int - the function takes one argument
 * @args: the argument being passed
 * Return: length of the integer
 */
<<<<<<< HEAD

int function_for_dec(va_list args)
{
	int dec = va_arg(args, int);

	char buff[20];
=======
int handle_int(va_list args)
{
	int dec = va_arg(args, int);

	char buff[30];
>>>>>>> b789cb871917f8f89247f30522a2624e81d3f268

	snprintf(buff, sizeof(buff), "%d", dec);

	write(1, buff, strlen(buff));
	return (strlen(buff));
}
<<<<<<< HEAD

=======
>>>>>>> b789cb871917f8f89247f30522a2624e81d3f268

/**
* _printf - function that produces an output according to the format
* @format: character string
* Return: The characters declared within the format
*/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				i++;
			}
			else if (*format == 'c')
			{
				i += function_for_char(args);
			}
			else if (*format == 's')
			{
				i += function_for_string(args);
			}
			else if (*format == 'd' || *format == 'i')
			{
<<<<<<< HEAD
				i += function_for_dec(args);
			}
			else if (*format == 'b')
			{
				i += conversion_specifiers(args);
=======
				i += handle_int(args);
>>>>>>> b789cb871917f8f89247f30522a2624e81d3f268
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
