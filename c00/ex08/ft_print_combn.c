/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:36:02 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/06 23:45:29 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_buildArray(int n);
void	ft_writeArray(int array[], int n, int endWrite);
void	ft_iterateArray(int n, int array[]);

void	ft_iterateArray(int n, int array[])
{
	int	iterator;
	int endWrite;

	endWrite = 0;
	iterator = n - 1;
	while (iterator >= 0)
	{
		if (array[iterator] < array[iterator + 1] - 1)
		{
			array[iterator]++;
				if(iterator != n - 1)
					array[iterator + 1] = array[iterator] + 1;
			iterator = n - 1;
			if (array[0] == 10 - n)
				endWrite = 1;
			ft_writeArray(array, n, endWrite);
		}
		else
			iterator--;
	}
}

void	ft_buildArray(int n)
{
	int	i;
	int	array[n];

	array[0] = 0;
	array[n] = 10;
	i = 1;
	while (i < n)
	{
		array[i] = array[i - 1] + 1;
		i++;
	}
	ft_writeArray(array, n, 0);
	ft_iterateArray(n, array);
}

void	ft_writeArray(int array[], int n, int endWrite)
{
	int	i;
	char convertToChar;

	i = 0;
	while (i < n)
	{
		convertToChar = array[i] + 48;
		write(1, &convertToChar, 1);
		i++;
	}
	if (endWrite == 0)
		write(1, " ", 1);
}

void	ft_print_combn(int n)
{
	ft_buildArray(n);
}
