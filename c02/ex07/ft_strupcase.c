/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:28:41 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 16:38:46 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Converts everything to uppercase
int	ft_str_is_lowercase(char *str)
{
	int	is_low;
	int	i;

	is_low = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			is_low = 1;
		i++;
	}
	return (is_low);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_str_is_lowercase(&c) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
