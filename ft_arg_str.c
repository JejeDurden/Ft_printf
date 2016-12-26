/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:11:34 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 17:01:18 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_arg_str(char *temp, va_list *var)
{
	char				*str;
	void				*p;
	unsigned long int	z;
	int					width;
	int					dot;

	dot = ft_get_char(temp, '.');
	width = ft_width_num(temp);
	if (*temp == 's')
	{
		str = va_arg(*var, char *);
		if (dot == 1)
		{
			if ((width - ft_smaller_size(ft_get_precision(temp),ft_strlen(str))) > 0)
				ft_putnchar(' ', width - ft_smaller_size(ft_get_precision(temp), ft_strlen(str)));
			ft_putnstr(str, ft_get_precision(temp));
			return (ft_smaller_size(ft_get_precision(temp), ft_strlen(str)));
		}
		else
		{
			if ((width - ft_strlen(str)) > 0)
				ft_putnchar(' ', width - ft_strlen(str));
			ft_putstr(str);
			return (ft_longer_size(ft_strlen(str), width));
		}
	}
	if (*temp == 'p')
	{
		p = va_arg(*var, void *);
		z = (unsigned long int)p;
		ft_putstr("0x");
		ft_print_hex(z);
		return (ft_puthex_size(z) + 2);
	}
	return (0);
}
