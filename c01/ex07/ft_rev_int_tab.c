/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:26:30 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 15:00:39 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Reverts the order of elements of an array of integers
void	ft_rev_int_tab(int *tab, int size)
{
	int	*point_end;
	int	*point_start;
	int	temp;
	int	i;

	point_start = tab;
	point_end = tab + size - 1;
	i = 0;
	while (i < size / 2)
	{
		temp = *point_start;
		*point_start = *point_end;
		*point_end = temp;
		point_start++;
		point_end--;
		i++;
	}
}
