/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:07:08 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 15:16:26 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Replicates strcpy
void	*ft_strcpy(char	*dest, char	*src)
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
