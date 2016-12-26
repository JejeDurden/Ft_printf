
#include "./includes/ft_printf.h"

int		ft_get_precision(char *temp)
{
	while (*temp != '.')
		temp--;
	return (ft_atoi(temp + 1));
}
