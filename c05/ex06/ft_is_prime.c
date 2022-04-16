/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:38:13 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/15 04:22:08 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		i = 2;
		while (i <= nb / 2 && i < 46340)
		{
			if (nb % i == 0)
				return 0;
			i++;
		}
	}
	return (1);
}
