/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 04:57:00 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/11 06:48:24 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_hexa(char c)
{
	int	temp;

	temp = c / 16 + 48;
	write(1, "\\", 2);
	write(1, &temp, 1);
	if (c % 16 < 10)
	{
		temp = (c % 16) + 48;
		write(1, &temp, 1);
	}
	else
	{
		temp = (c % 16) + 87;
		write(1, &temp, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] / 16 < 2)
			ft_write_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
