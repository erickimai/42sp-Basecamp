/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:42:57 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/19 02:26:08 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (-1);
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (size);
}

int	*ft_range(int min, int max)
{
	int	*elements;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	elements = malloc((max - min) * sizeof(int));
	if (!elements)
		return (NULL);
	i = 0;
	size = max - min;
	while (i < size)
	{
		elements[i] = min;
		i++;
		min++;
	}
	return (elements);
}
