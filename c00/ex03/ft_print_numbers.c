/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 05:38:49 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/07 21:04:02 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Print numbers from 0 to 9
void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		n++;
	}
}
