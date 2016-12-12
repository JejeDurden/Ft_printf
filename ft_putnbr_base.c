












#include "./includes/ft_printf.h"

void	ft_putnbr_base(int nb, int base)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (base == 10)
		ft_putnbr(nb);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
		}
		if (nb >= base)
			ft_putnbr_base(nb / base, base);
		ft_putchar(str[nb % base]);
	}
}
