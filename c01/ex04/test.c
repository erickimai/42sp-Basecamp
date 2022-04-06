#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main (void)
{
	int	*a;
	int *b;
	int i = 5;
	int j = 2;

	a = &i;
	b = &j;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", i, j);
	return (0);
}
