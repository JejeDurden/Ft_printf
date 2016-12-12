












#ifndef FT_PRINTF
# define FT_PRINTF

#include "../libft/libft.h"
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_get_arg(const char *format, va_list *var);
int		ft_parse_arg(char **cur, va_list *var);
void	ft_putnbr_base(int nb, int base);
void	ft_putnbr_base_min(int nb, int base);

#endif
