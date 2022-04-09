/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:42:09 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:59:47 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Counts the number of characters in a character string and
	returns the number found. */
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
