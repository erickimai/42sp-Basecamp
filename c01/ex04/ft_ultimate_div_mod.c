/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:27:08 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:56:47 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Divides the int pointed to by a and b.
	The result of the division is stored in the int pointed to by a.
	The result of the remainder of the division is stored in the int pointed
	 to by b. */
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
