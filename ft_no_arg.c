
#include "./includes/ft_printf.h"

int		ft_no_arg(char *temp)
{
	int		len;
	int		width;
	int		minus;

	width = ft_width_num(temp);
	len = width + 1;
	minus = ft_get_char(temp, '-');
	if (minus == 1)
		ft_putchar(*temp);
	if (width >= 1)
		ft_putnchar(' ', width - 1);
	if (minus == 0)
		ft_putchar(*temp);
	return (len);
}
