/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 06:13:53 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/07 21:05:28 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Prints if integer parameter is positive or negative
void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
