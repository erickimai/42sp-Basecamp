/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:40:45 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/19 19:36:30 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Checks if the base is a valid base and returns its lenght
int	ft_check_validity(char *base)
{
	int		i;
	int		j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

// Checks if a character is in the base returning 1 if true
int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

//	Converts any string into an integer like normal atoi funcion
int	ft_atoi(char *str, char *base, int bsize)
{
	int	count_neg;
	int	i;
	int	nbr;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	count_neg = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count_neg++;
		i++;
	}
	nbr = 0;
	while (ft_in_base(str[i], base) != -1)
	{
		nbr = (nbr * bsize) + ft_in_base(str[i], base);
		i++;
	}
	if (count_neg % 2)
		nbr *= -1;
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;

	base_size = ft_check_validity(base);
	if (base_size <= 1)
		return (0);
	return(ft_atoi(str, base, base_size));
}
