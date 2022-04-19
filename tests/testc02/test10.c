#include <stdio.h>
#include <stdlib.h>


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 1);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	printf("last char: %d\n", dest[1]);
	src_size = ft_strlcpy(dest, src, 1);
	printf("src_size: %d\n", src_size);
	return(0);
}
