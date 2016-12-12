










#include "./includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char	*str;
	char	c;
	int		n;
	unsigned int	u;

	str = "CE dans le retro";
	c = 'L';
	n = 42;
	u = 3000;
	printf("vrai  printf = une chaine :  %s, un nombre : %i, une lettre: %c, un unsigned %x\n", str, n, c, u);
	ft_printf("my ft_printf = une chaine :  %s, un nombre : %d, une lettre: %c, un unsigned %x\n", str, n, c, u);
	return 0;
}
