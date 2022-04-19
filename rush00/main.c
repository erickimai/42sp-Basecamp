/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:14:46 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/11 16:51:53 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	main(int argc, char *argv[])
{
	if (*argv[1] == '0')
		rush00(-1, 0);
	else if (*argv[1] == '1')
		rush01(1, 5);
	else if (*argv[1] == '2')
		rush02(1, 4);
	else if (*argv[1] == '3')
		rush03(4, 1);
	else if (*argv[1] == '4')
		rush04(4, 4);
	return (argc);
}
