/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:49:23 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/14 22:56:31 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb;
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
		if (nb < 0 && power % 2 == 1)
			nb *= -1;
		return (result);
	}
}
