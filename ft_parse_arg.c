












#include "./includes/ft_printf.h"

static int		ft_arg_char(char c, va_list *var)
{
	int			chara;
//	unsigned char	uchara;

	if (c == 'c')
	{
		chara = va_arg(var, int);
		ft_putchar(chara);
	}
/*	if (c == 's')
	{
		uchara = va_arg(var, unsigned char);
		ft_putchar(uchara);
	}*/
	return (1);
}

static int		ft_arg_str(char c, va_list *var)
{
	char			*str;
//	unsigned char	*ustr;
	int				len;

	if (c == 's')
	{
		str = va_arg(var, char *);
		ft_putstr(str);
		len = ft_strlen(str);
	}
/*	if (c == 'S')
	{
		ustr = va_arg(var, unsigned char *);
		ft_putstr(ustr);
		len = ft_strlen(ustr);
	}*/
	return (len);
}

static int		ft_arg_nb(char c, va_list *var)
{
	int				d;
	unsigned int	u;
	//void			*p;
	int				len;

	if (c == 'd'|| c == 'i')
	{
		d = va_arg(var, int);
		ft_putnbr(d);
		len = 3;
//		len = count_nb(d);
	}
	if (c == 'u' || c == 'o' || c == 'x')
	{
		u = va_arg(var, unsigned int);
		ft_putnbr_base_min(u, 16);
		len = 3;
	//	len = count_nb(u);
	}
	/*if (c == 'p')
	{
		p = va_arg(var, void *);
		ft_putnbr_base(p, 16);
		}*/
	return (len);
}

int		ft_parse_arg(char **cur, va_list *var)
{
	int		len;
	char	*temp;

	temp = *cur;
	if (**cur == 's'|| **cur == 'S')
		len = ft_arg_str(**cur, var);
	if (**cur == 'c')
		len = ft_arg_char(**cur, var);
	if (**cur == 'd' || **cur == 'i' || **cur == 'u' || **cur == 'p' || **cur == 'x' || **cur == 'X')
		len = ft_arg_nb(**cur, var);
	temp++;
	*cur = temp;
	return (len);
}
