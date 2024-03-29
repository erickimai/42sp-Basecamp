/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:57:50 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/08 04:26:15 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//	Returns the size of number
int	ft_countdgt(int nbr)
{
	int	temp;
	int	div;

	temp = nbr;
	div = 1;
	while (temp / 10 > 0)
	{
		temp = temp / 10;
		div = div * 10;
	}
	return (div);
}

//	Checks if number is positive or negative
int	ft_checksign(int nbr)
{
	int	nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

//	Writes number passed as parameter
void	ft_putnbr(int nb)
{
	int	nbr;
	int	print_dgt;
	int	div;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	nbr = ft_checksign(nb);
	div = ft_countdgt(nbr);
	while (div > 0)
	{
		print_dgt = (nbr / div) + 48;
		write(1, &print_dgt, 1);
		nbr = nbr % div;
		div = div / 10;
	}
	if (nbr % 10 != 0)
	{
		print_dgt = nbr % 10;
		write(1, &print_dgt, 1);
	}
}
