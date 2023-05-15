#include "ft_printf_lib.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	long	nb;
	int		length;

	length = ft_strlen(base);
	if (length < 2)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', count);
	}
	if (nb < length)
		ft_putchar(base[nb], count);
	if (nb >= length)
	{
		ft_putnbr_base(nb / length, base, count);
		ft_putnbr_base(nb % length, base, count);
	}
}