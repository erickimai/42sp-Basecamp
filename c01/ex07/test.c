#include <unistd.h>
#include <stdio.h>

int	ft_rev_int_tab(int	*tab, int	size);

int	main (void)
{
	int	size = 1;
	int i = 0;
	int	array[2] = {1};
	int	*tab = array;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
