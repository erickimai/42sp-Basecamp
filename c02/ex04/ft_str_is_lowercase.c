/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:35:07 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 16:36:53 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Return 1 if the string passed as a parameter contains only
	lowercase alphabetic characters and return 0 if the function contains
	other types of characters. */
int	ft_str_is_lowercase(char *str)
{
	int	is_low;
	int	i;

	is_low = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			is_low = 0;
		i++;
	}
	return (is_low);
}
