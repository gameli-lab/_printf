#include "main.h"

/**
 * handle_char - the function takes one argument
 * @args: the argument being passed
 * Return: 1 to the standard output
 */
int handle_char (va_list args)
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
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);

	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
		return (str_len);
}

/**
 * handle_dec - handles integers
 * @args: argument being passed
 *
 * Return: length of the buff
 */

int handle_dec(va_list args)
{
	int dec = va_arg(args, int);

	char buff[20];
	snprintf(buff, sizeof(buff), "%d", dec);
	write(1, buff, strlen(buff));
	return (strlen(buff));
}
	

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
				i += handle_char(args);
			}
			else if (*format == 's')
			{
				i += handle_string(args);
			}
			else if (*format == 'i' || *format == 'd')
			{
				i += handle_dec(args);
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
