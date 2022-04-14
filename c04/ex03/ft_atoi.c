/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:38:49 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/13 16:39:59 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
