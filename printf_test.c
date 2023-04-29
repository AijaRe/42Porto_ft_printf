#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#ifndef FT_PRINTF
#define FT_PRINTF

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	int	i;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				ft_putchar(va_arg(args, int), &count);
			}
		}
		else
		{
			ft_putchar(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return count;
}

int	main()
{
	int count = ft_printf("test.%c..the.string.%c", 'a', 'b');
	printf("\n");
	printf("%d\n", count);
}
#endif