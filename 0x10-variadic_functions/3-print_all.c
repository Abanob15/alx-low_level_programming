#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 *
 * @format: specifies necessary operations
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i;
	int x;
	char *str;
	va_list pal;

	va_start(pal, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pal, int));
				x = 0;
				break;
			case 'i':
				printf("%i", va_arg(pal, int));
				x = 0;
				break;
			case 'f':
				printf("%f", va_arg(pal, double));
				x = 0;
				break;
			case 's':
				str = va_arg(pal, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				x = 0;
				break;
			default:
				x = 1;
				break;
		}
		if (format[i + 1] != '\0' && x == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pal);
}
