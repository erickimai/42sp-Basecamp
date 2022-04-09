/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 04:19:20 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/07 20:41:28 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Print entire alphabet, lowercase
void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 122)
	{
		write (1, &c, 1);
		c++;
	}
}
