/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:42:40 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/19 17:35:40 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//	Return all possible integers between (min, max)
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
