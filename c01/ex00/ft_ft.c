/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 03:25:00 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:27:08 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function that has a pointer to int in parameter and give int the
//	value of 42
void	ft_ft(int *nbr)
{
	int	*p;

	p = &*nbr;
	*p = 42;
}
