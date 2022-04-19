/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:36:50 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/18 22:54:42 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char	*dest, char	*src)
{
	char	temp;
	int		i;

	i = 0;
	temp = src[i];
	while (temp != '\0')
	{
		temp = src[i];
		dest[i] = temp;
		i++;
	}
	dest[i] = '\0';
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = malloc(ft_strlen(src));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
