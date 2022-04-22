/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:43:09 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/20 16:29:37 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strslen(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
			len++;
		i++;
	}
	return (len);
}

int	seplen(char *sep)
{
	int	i;

	i = 0;
	while (*sep++)
		i++;
	return (i);
}

//	Concatenates strings pointed by strs and separates them by sep
char	*join_strings(int size, char **strs, char *sep, char *str_final)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str_final[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			str_final[k++] = sep[j++];
		i++;
	}
	return (str_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;

	if (size == 0)
	{
		str_final = malloc(sizeof(char));
		return (0);
	}
	str_final = malloc((strslen(size, strs) + seplen(sep)) * sizeof(char));
	if (!str_final)
		return (0);
	str_final = join_strings(size, strs, sep, str_final);
	return (str_final);
}
