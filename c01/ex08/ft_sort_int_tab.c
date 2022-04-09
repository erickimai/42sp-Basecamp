/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:59:46 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 15:01:34 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//	Sort an array of integers in ascending order
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (size < 1)
		return ;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
			swap(&tab[i], &tab[i + 1]);
		i++;
	}
	ft_sort_int_tab(tab, size - 1);
}
