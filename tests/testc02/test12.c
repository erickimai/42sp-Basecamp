#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[] = {48};

	ft_print_memory(str, strlen(str));
	return (0);
}
