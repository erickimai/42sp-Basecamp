/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:40:45 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/13 22:33:47 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_check_validity(char *base)
{
	int		i;
	int		j;
	char	c;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	c = base[1];
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (c != '\0')
		{
			c = base[j];
			if (c == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int		count_neg;
	int		nbr;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	count_neg = 0;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			count_neg++;
		str++;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	if (count_neg % 2)
		nbr *= -1;
	return (nbr);
}

int	ft_convert_base(long int nbr, char *base, int bsize)
{
	if (nbr >= bsize)
	{
		ft_convert_base(nbr / bsize, base, bsize);
		ft_convert_base(nbr % bsize, base, bsize);
	}
	else
		write (1, &base[nbr], 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	atoi_number;

	if (ft_check_validity(base) == 0)
		return (0);
	base_size = ft_strlen(base);
	atoi_number = ft_atoi(str);
	if (atoi_number < 0)
	{
		write(1, "-", 1);
		atoi_number *= -1;
	}
	if (atoi_number == INT_MIN)
	{
		ft_convert_base(-((long int) INT_MIN), base, base_size);
		return (1);
	}
	ft_convert_base(atoi_number, base, base_size);
	return (1);
}
