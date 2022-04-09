/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:13:37 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 16:14:13 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Replicates strncpy
char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
