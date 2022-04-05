#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int	main (void)
{
	int	*a;
	int *b;
	int i = 4;
	int j = 2;

	a = &i;
	b = &j;
	ft_swap(a, b);
	printf("%d, %d", i, j);
	return (0);
}
