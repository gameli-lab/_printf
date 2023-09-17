#include "main.h"
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
			write (1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write (1, format, 1);
				i++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write (1, &c, 1);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write (1, str, str_len);
				i += str_len;
			}
		}
		format++;
	}

	va_end(args);
}
