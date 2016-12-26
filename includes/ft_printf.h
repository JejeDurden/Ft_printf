/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:50:45 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 16:30:49 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <wchar.h>

int		ft_printf(const char *format, ...);
int		ft_get_arg(const char *format, va_list *var);
int		ft_parse_arg(char **cur, va_list *var);
int		ft_parse_flags(char *temp);
int		ft_parse_width(char *temp);
int		ft_parse_precision(char *temp);
int		ft_parse_length(char *temp, int len);
int		ft_get_char(char *temp, char c);
int		ft_char_printf(char c);
int		ft_arg_char(char c, va_list *var);
int		ft_arg_str(char *temp, va_list *var);
int		ft_arg_nb(char *temp, va_list *var);
int		ft_arg_unb(char *temp, va_list *var);
int		ft_width_num(char *temp);
int		ft_get_precision(char *temp);
int		ft_no_arg(char *temp);

#endif
