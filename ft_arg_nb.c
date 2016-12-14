/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:14:02 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 14:16:56 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_arg_nb(char *temp, va_list *var)
{
	int		d;
	int		len;
	int		plus;
	int		space;

	len = 0;
	plus = ft_get_char(temp, '+');
	space = ft_get_char(temp, ' ');
	if (*temp == 'd' || *temp == 'i')
	{
		d = va_arg(*var, int);
		if (d > 0 && plus == 1)
		{
			ft_putchar('+');
			len++;
		}
		if (d > 0 && plus == 0 && space == 1)
		{
			ft_putchar(' ');
			len++;
		}
		ft_putnbr(d);
		len = ft_count_nb(d);
	}
	return (len);
}
