/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:37:38 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/17 16:36:28 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main (int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(*argv[]))
	}



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

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_sort(int *v, int n){
	if (n < 1)return;

	for (int i=0; i<n; i++)
		if (v[i] > v[i+1])
			ft_swap(&v[i], &v[i+1]);
    ft_sort(v, n-1);
}
