/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:18:19 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/21 16:58:22 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_len(char *str);
char	*ft_strcpy(char	*dest, char	*src);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	stock = malloc((ac + 1) * sizeof(*stock));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_len(av[i]);
		stock[i].str = (char *)malloc(sizeof(char *));
		if (!stock[i].str)
			return (NULL);
		stock[i].str = av[i];
		stock[i].copy = (char *)malloc(sizeof(char *));
		if (!stock[i].copy)
			return (NULL);
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].size = 0;
	stock[i].copy = 0;
	return (stock);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
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
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(((ft_len(src) + 1) * sizeof(char *)));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
