/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:53:52 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 14:33:50 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int				ft_parse_arg(char **cur, va_list *var)
{
	int		len;
	char	*temp;
	int		i;

	temp = *cur;
	len = 0;
	i = 0;
	if (*temp == '%' || *temp == '\0')
		{
			ft_putchar('%');
			*cur = temp + 1;
			return (1);
		}
	i += ft_parse_flags(temp);
	i += ft_parse_width(temp);
	i += ft_parse_precision(temp);
	i += ft_parse_length(temp, i);
	temp += i;
	if (*temp == '%' || !ft_char_printf(*temp))
		len = ft_no_arg(temp);
	if (*temp == 's' || *temp == 'p')
		len = ft_arg_str(temp, var);
	if (*temp == 'c')
		len = ft_arg_char(*temp, var);
	if (*temp == 'd' || *temp == 'i')
		len = ft_arg_nb(temp, var);
	if (*temp == 'x'|| *temp == 'X' || *temp == 'o' || *temp == 'u')
		len = ft_arg_unb(temp, var);
	if (temp + 1 != '\0')
		temp++;
	*cur = temp;
	return (len);
}
