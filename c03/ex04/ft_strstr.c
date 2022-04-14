/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 06:30:13 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/13 02:30:01 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	if (((unsigned char)s1[i] < (unsigned char)s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while ((s1[i] == s2[i]) && s1[i] != '\0' && i < n - 1)
	{
		i++;
		if ((s1[i] != s2[i]) && (unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if ((s1[i] != s2[i]) && s1[i] > s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*aux;

	aux = to_find;
	i = 0;
	while (*aux++)
		i++;
	if (!i)
		return (str);
	while (*str++)
	{
		aux = to_find;
		if (*to_find == *str)
		{
			if (!(ft_strncmp(str, aux, i)))
				return (str);
		}
	}
	return ('\0');
}
