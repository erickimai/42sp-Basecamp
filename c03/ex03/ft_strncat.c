/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 06:11:36 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/12 06:26:42 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p != '\0')
		p++;
	while (*src != '\0' && nb-- > 0)
		*p++ = *src++;
	*p++ = '\0';
	return (dest);
}
