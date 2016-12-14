/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:08:49 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 14:10:53 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_arg_char(char c, va_list *var)
{
	int		chara;

	if (c == 'c')
	{
		chara = va_arg(*var, int);
		ft_putchar(chara);
	}
	return (1);
}
