#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = {'0', '1', 3, 31, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
