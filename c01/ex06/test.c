#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main (void)
{
	char	str[] = "Gruszin Fraude-d";
	char	*c = str;

	printf("%d \n", ft_strlen(c));
	return (0);
}
