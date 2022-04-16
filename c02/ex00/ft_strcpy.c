/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:07:08 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/14 05:36:02 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Replicates strcpy
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
