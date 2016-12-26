/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uhex_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:23:26 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 09:10:15 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_uhex_maj(unsigned int nb)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nb >= 16)
		ft_print_uhex_maj(nb / 16);
	ft_putchar(str[nb % 16]);
}
