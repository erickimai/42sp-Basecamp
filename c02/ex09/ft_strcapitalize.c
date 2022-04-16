/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:49:55 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/15 02:33:38 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Capitalizes first word of every word

char	ft_checknext(char c, char d)
{
	if (c >= 'a' && c <= 'z')
		d += 32;
	else if (c >= '0' && c <= '9')
		d += 32;
	else if (c >= 'A' && c <= 'Z')
		d += 32;
	return (d);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
				str[i] -= 32;
			else if ((str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
				str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = ft_checknext(str[i - 1], str[i]);
		i++;
	}
	return (str);
}
