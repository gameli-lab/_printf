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
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if ((*format == '%') || (*format == 'c') || (*format == 's') ||\
				       	(*format == 'd') || (*format == 'i') ||	(*format == 'o') ||\
				       	(*format == 'u') || (*format == 'h') || (*format == 'H') ||\
				       	(*format == 'p'))
			{
				i += handle_printing(format, args);
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
