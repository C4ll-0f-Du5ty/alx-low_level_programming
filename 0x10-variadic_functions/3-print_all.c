#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				if (separator != NULL)
                                        printf("%s", separator);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				if (separator != NULL)
                                        printf("%s", separator);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				if (separator != NULL)
                                        printf("%s", separator);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				if (separator != NULL)
					printf("%s", separator);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
