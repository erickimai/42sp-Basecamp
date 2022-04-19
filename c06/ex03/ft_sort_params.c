/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:37:38 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/18 17:42:07 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(char *argv[], int n);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char *v[], int i, int j);
void	ft_print(char *argv[], int argc);

int	main(int argc, char *argv[])
{
	ft_sort(argv, argc);
	ft_print(argv, argc);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (((unsigned char)s1[i] < (unsigned char)s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
		if ((s1[i] != s2[i]) && (unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if ((s1[i] != s2[i]) && s1[i] > s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

void	ft_swap(char *v[], int i, int j)
{
	char	*temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void	ft_sort(char *argv[], int n)
{
	int	i;

	if (n < 1)
		return ;
	i = 1;
	while (i < n - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			ft_swap(argv, i, i + 1);
		i++;
	}
	ft_sort(argv, n - 1);
}

void	ft_print(char *argv[], int argc)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
