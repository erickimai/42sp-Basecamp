/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:43:25 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/20 01:25:24 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
int		ft_atoi(char *str, char *base, int bsize);
int		ft_in_base(char c, char *base);
void	from_to(long int nbr, char *base, char *res, int i);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	int		i;
	int		aux;
	char	*result;

	if (check_base(base_from) <= 1 || check_base(base_to) <= 1)
		return (NULL);
	number = ft_atoi(nbr, base_from, check_base(base_from));
	i = 0;
	aux = number;
	while (aux / check_base(base_to))
	{
		aux = aux / check_base(base_to);
		i++;
	}
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (0);
	from_to((long int) number, base_to, result, i);
	return (result);
}

//	Checks if the base is a valid base and returns its lenght
int	check_base(char *base)
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
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
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

void	from_to(long int nbr, char *base, char *res, int i)
{
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
		i++;
	}
	if (nbr >= check_base(base))
	{
		from_to(nbr / check_base(base), base, res, i - 1);
		from_to(nbr % check_base(base), base, res, i);
	}
	else
	{
		res[i] = base[nbr];
	}
}
