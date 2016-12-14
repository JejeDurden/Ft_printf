/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_unb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:16:59 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 14:22:19 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_arg_unb(char *temp, va_list *var)
{
	int				len;
	int				plus;
	int				hashtag;
	int				space;
	unsigned int	u;

	len = 0;
	plus = ft_get_char(temp, '+');
	hashtag = ft_get_char(temp, '#');
	space = ft_get_char(temp, ' ');
	if (*temp == 'u' || *temp == 'o' || *temp == 'x' || *temp == 'X')
	{
		u = va_arg(*var, unsigned int);
		if (*temp == 'x')
		{
			if (hashtag == 1)
				ft_putstr("0x");
			ft_putnbr_base_min(u, 16);
		}
		if (*temp == 'o')
		{
			if (hashtag == 1)
				ft_putstr("0");
			ft_putnbr_base(u, 8);
		}
		if (*temp == 'X')
		{
			if (hashtag == 1)
				ft_putstr("0X");
			ft_putnbr_base(u, 16);
		}
		if (*temp == 'u')
		{
			if (u > 0 && plus == 0 && space == 1)
			{
				ft_putchar(' ');
				len++;
			}
			ft_putunbr(u);
		}
		len += ft_count_nb(u);
	}
	return (len);
}
