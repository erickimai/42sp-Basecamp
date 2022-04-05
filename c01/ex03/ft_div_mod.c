/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:19:15 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/05 21:42:07 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
