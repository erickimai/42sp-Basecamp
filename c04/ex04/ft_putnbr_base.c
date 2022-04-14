/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:15:29 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/13 16:48:02 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		return (1);
	i = 0;
	c = base[1];
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (c != '\0')
		{
			c = base[j];
			if (c == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_convert_base(long int nbr, char *base, int bsize)
{
	if (nbr >= bsize)
	{
		ft_convert_base(nbr / bsize, base, bsize);
		ft_convert_base(nbr % bsize, base, bsize);
	}
	else
		write (1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (ft_check_validity(base))
		return ;
	base_size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr == INT_MIN)
	{
		ft_convert_base(-((long int) INT_MIN), base, base_size);
		return ;
	}
	ft_convert_base(nbr, base, base_size);
}
