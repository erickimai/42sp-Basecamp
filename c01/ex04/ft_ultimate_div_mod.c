/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:27:08 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/05 22:45:37 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*num;
	int	*den;
	int	temp;

	num = a;
	den = b;
	temp = *num;
	*num = *a / *den;
	*b = temp % *den;
}
