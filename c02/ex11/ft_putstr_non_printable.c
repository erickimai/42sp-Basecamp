/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 04:57:00 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/15 01:47:36 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Print character passed as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_hexa(char c)
{
	unsigned int	temp;

	temp = c / 16 + 48;
	ft_putchar('\\');
	ft_putchar(temp);
	if (c % 16 < 10)
		temp = (c % 16) + 48;
	else
		temp = (c % 16) + 87;
	ft_putchar(temp);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 32) && str[i] >= 0 ) || str[i] == 127)
			ft_write_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
