#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int i, int j, int *a, int *b);

int	main (void)
{
	int	*a;
	int *b;
	int quociente;
	int resto;
	int i = 0;
	int j = 0;

	a = &quociente;
	b = &resto;
	ft_div_mod(i, j, a, b);
	printf("%d, %d", quociente, resto);
	return (0);
}
