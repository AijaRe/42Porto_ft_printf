#include "ft_printf_lib.h"

void	ft_print_ptr(unsigned long long ptr, char *base, int *count)
{
	if (ptr == 0)
		ft_putchar('0', count);
	else
	{
		ft_putstr("0x", count);
		ft_putnbr_base(ptr, base, count);
	}
}