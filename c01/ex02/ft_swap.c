/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:00:11 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/09 14:55:58 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Swap the contents of two integers whose addresses are
	given in parameters. */
void	ft_swap(int	*a,	int*b)
{
	int	*frst_addrs;
	int	*sec_addrs;
	int	temp;

	frst_addrs = a;
	sec_addrs = b;
	temp = *frst_addrs;
	*frst_addrs = *sec_addrs;
	*sec_addrs = temp;
}
