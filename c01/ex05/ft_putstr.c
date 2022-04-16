/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:05:31 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/14 13:38:49 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Shows one by one the characters of a string on the screen.
void	ft_putstr(char *c)
{
	while (*c != '\0')
		write(1, *c++, 1);
}
