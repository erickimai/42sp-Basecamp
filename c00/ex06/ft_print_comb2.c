/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:25:38 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/07 21:19:31 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(int first_nbr, int second_nbr)
{
	int	first_digit;
	int	second_digit;

	first_digit = (first_nbr / 10) + 48;
	write(1, &first_digit, 1);
	second_digit = (first_nbr % 10) + 48;
	write(1, &second_digit, 1);
	write(1, " ", 1);
	first_digit = (second_nbr / 10) + 48;
	write(1, &first_digit, 1);
	second_digit = (second_nbr % 10) + 48;
	write(1, &second_digit, 1);
	if (first_nbr != 98)
	{
		write(1, ", ", 2);
	}
}

//	Show all different combinations of two numbers
//	between 0 and 99, in ascending order
void	ft_print_comb2(void)
{
	int	first_nbr;
	int	second_nbr;

	first_nbr = 0;
	while (first_nbr <= 98)
	{
		second_nbr = first_nbr + 1;
		while (second_nbr <= 99)
		{
			if (second_nbr > first_nbr)
			{
				ft_putchar2(first_nbr, second_nbr);
			}
				second_nbr++;
		}
		first_nbr++;
	}
}
