/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:37:29 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 16:37:32 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Return 1 if the string passed as a parameter contains only
	uppercase alphabetic characters and return 0 if the function
	contains other types of characters. */
int	ft_str_is_uppercase(char *str)
{
	int	is_upper;
	int	i;

	is_upper = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			is_upper = 0;
		i++;
	}
	return (is_upper);
}
