/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:17:28 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 16:29:48 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_width_num(char *temp)
{
	int		dot;

	dot = ft_get_char(temp, '.');
	if (dot == 1)
	{
		while (*temp != '.')
			temp--;
	}
	temp--;
	if (ft_isdigit(*temp))
	{
		while (ft_isdigit(*temp))
			temp--;
		return (ft_atoi(temp + 1));
	}
	return (0);
}
