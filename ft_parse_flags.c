/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:12:48 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 11:38:32 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_parse_flags(char *temp)
{
	int		i;

	i = 0;
	while (temp[i] == ' ' || temp[i] == '+' || temp[i] == '-'
			|| temp[i] == '#' || temp[i] == '0')
		i++;
	if (*temp == '-')
		temp++;
	return (i);
}
