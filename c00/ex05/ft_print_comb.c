/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 06:30:59 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/04 06:56:16 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if	(i != 55)
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
