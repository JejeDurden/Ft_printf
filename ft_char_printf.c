
#include "./includes/ft_printf.h"

int		ft_char_printf(char c)
{
	return (c == 's' || c == 'S' || c == 'p' || c == 'd' ||
			c == 'D' || c == 'i' || c == 'o' || c == 'O' ||
			c == 'u' || c == 'U' || c == 'x' || c == 'X' ||
			c == 'c' || c == 'C' || c == 'h' || c == 'l' ||
			c == 'j' || c == 'z');
}
