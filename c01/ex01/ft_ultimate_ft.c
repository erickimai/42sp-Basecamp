/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 04:29:13 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:47:41 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function that has a pointer to pointer to pointer to pointer to pointer
	to pointer to pointer to pointer to pointer to
	int in parameter and give the int the value of 42 */
void	ft_ultimate_ft(int *********nbr)
{
	int	*p;

	p = &*********nbr;
	*p = 42;
}
