/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:00:02 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:46 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_countdgt(int nbr);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

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

void	ft_putnbr(int nb)
{
	int	print_dgt;
	int	div;

	div = ft_countdgt(nb);
	while (div > 0)
	{
		print_dgt = (nb / div) + 48;
		write(1, &print_dgt, 1);
		nb = nb % div;
		div = div / 10;
	}
	if (nb % 10 != 0)
	{
		print_dgt = nb % 10;
		write(1, &print_dgt, 1);
	}
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
	return ;
}
