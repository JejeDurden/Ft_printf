/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:53:32 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 13:40:29 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_get_arg(const char *format, va_list *var)
{
	int		i;
	int		len;
	char	*start;
	char	*cur;

	len = 0;
	i = 0;
	cur = (char *)format;
	start = ft_strnew(ft_strlen(format));
	while (cur[i])
	{
		if (cur[i] == '%')
		{
			start = ft_strcdup(cur, '%');
			len += ft_strlen(start);
			ft_putstr(start);
			cur = cur + i + 1;
			len += ft_parse_arg(&cur, var);
			i = 0;
			start = cur;
		}
		i++;
	}
	len += ft_strlen(cur);
	ft_putstr(cur);
	return (len);
}
