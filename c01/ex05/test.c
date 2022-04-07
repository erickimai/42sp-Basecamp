#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *c);

int	main (void)
{
	char	str[] = "Badzin Marreco";
	char	*c = str;

	ft_putstr(c);
	return (0);
}
