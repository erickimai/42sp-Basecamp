#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	dest[] = "                 ";
	char	*src;
	int		size;

	size = 16;
	src = "Bonjour les chacaux";
//	printf(".%s.\n\n", ft_strncpy(dest, src, size));
	printf(".%s.\n\n", strncpy(dest, src, size));
}
