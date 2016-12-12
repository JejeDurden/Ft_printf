












#include "./includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		var;
	size_t		i;

	i = 0;
	if (!format)
		return (-1);
	va_start(var, format);
	i = ft_get_arg(format, &var);
	va_end(var);
	return (i);
}
