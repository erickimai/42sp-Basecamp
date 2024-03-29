/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:38:49 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/16 04:18:08 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count_neg;
	int	nbr;

	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\t'
			|| *str == '\f' || *str == '\v')
		str++;
	count_neg = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
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
