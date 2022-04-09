/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:30:45 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/08 04:33:41 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_build_array(int n);
void	ft_write_array(int array[], int n, int end_write);
void	ft_iterate_array(int n, int array[]);

//	Iterates array backwards
void	ft_iterate_array(int n, int array[])
{
	int	iterator;
	int	end_write;

	end_write = 0;
	iterator = n - 1;
	while (iterator >= 0)
	{
		if (array[iterator] < array[iterator + 1] - 1)
		{
			array[iterator]++;
			while (iterator != n - 1)
			{
				array[iterator + 1] = array[iterator] + 1;
				iterator++;
			}
			iterator = n - 1;
			if (array[0] == 10 - n)
				end_write = 1;
			ft_write_array(array, n, end_write);
		}
		else
			iterator--;
	}
}

void	ft_build_array(int n)
{
	int	i;
	int	array[11];

	array[0] = 0;
	array[n] = 10;
	i = 1;
	while (i < n)
	{
		array[i] = array[i - 1] + 1;
		i++;
	}
	ft_write_array(array, n, 0);
	ft_iterate_array(n, array);
}

//	Print an array on stdout
void	ft_write_array(int array[], int n, int end_write)
{
	int		i;
	char	convert_to_char;

	i = 0;
	while (i < n)
	{
		convert_to_char = array[i] + 48;
		write(1, &convert_to_char, 1);
		i++;
	}
	if (end_write == 0)
		write(1, ", ", 2);
}

//	Show all different combinations of n numbers in
//	ascending order.
void	ft_print_combn(int n)
{
	ft_build_array(n);
}
