/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:19:15 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:55:11 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Divides the two parameters a and b and stores the result in the int
	pointed by div.
	It also stores the remainder of the division of a and b in the int pointed
	to by mod. */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	numerator;
	int	denumerator;
	int	*quotient;
	int	*remainder;

	numerator = a;
	denumerator = b;
	quotient = div;
	remainder = mod;
	*quotient = numerator / denumerator;
	*remainder = numerator % denumerator;
}
