#include "ft_printf_lib.h"

void	ft_check(va_list args, char *string, int i, int *count)
{
	char	*base10;
	base10 = "0123456789";
	char	*base16lo;
	base16lo = "0123456789abcdef";
	char	*base16up;
	base16up = "0123456789ABCDEF";

	if (string[i] == 'c')
		ft_putchar(va_arg(args, int), count);
	if (string[i] == 'd' || string[i] == 'i')
		ft_putnbr_base(va_arg(args, int), base10, count);
	if (string[i] == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), base10, count);
	if (string[i] == 's')
		ft_putstr(va_arg(args, char*), count);
	if (string[i] == 'x')
		ft_putnbr_base(va_arg(args, int), base16lo, count);
	if (string[i] == 'X')
		ft_putnbr_base(va_arg(args, int), base16up, count);
	if (string[i] == 'p')
		ft_print_ptr(va_arg(args, unsigned long long), base10, count);
	if (string[i] == '%')
		ft_putchar('%', count);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*string;
	int	count;
	int	i;

	string = (char*)format;
	va_start(args, format);
	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			ft_check(args, string, i, &count);
		}
		else
		{
			ft_putchar(string[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	char *str;
	str = "with string";
	int count = ft_printf("test.%c..the.string.%s", 'a', str);
	printf("\n");
	printf("%d\n", count);
	int count2 = ft_printf("test.%d..the.string.%%", 12);
	printf("\n");
	printf("%d\n", count2);
	int count3 = ft_printf("hex 42 low: %x; hex 42 UP: %X", 42, 42);
	printf("\n");
	printf("%d\n", count3);
	int a = 5;
    int *p = &a;
    int count4 = printf("%p, %u, %u", p, 20, -20);
	printf("\n");
	printf("%d\n", count4);
}*/
