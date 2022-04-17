/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 05:06:10 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/17 14:50:03 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Prints a character passed as parameter
void	ft_empty_matrix(int matrix[10][10])
{
	int	row;
	int	column;

	row = 0;
	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			matrix[row][column] = 0;
			column++;
		}
		row++;
	}
	return ;
}

//	Prints a possible solution (position of nth possible queen on nth column)
void	ft_print_solution(int matrix[10][10])
{
	int		row;
	int		column;
	char	c;

	column = 0;
	while (column <= 9)
	{
		row = 0;
		while (row <= 9)
		{
			if (matrix[row][column] == 1)
			{
				c = row + '0';
				write(1, &c, 1);
			}
			row++;
		}
		column++;
	}
	c = '\n';
	write(1, &c, 1);
	return ;
}

//	Checks from column (0) to (j - 1) if row (i), column (j) is a
//	valid position, checking upper and lower diagonal also
int	ft_is_valid(int matrix[10][10], int i, int j)
{
	int	column;
	int	row;

	column = 0;
	while (column < j)
	{
		if (matrix[i][column])
			return (0);
		column++;
	}
	row = i;
	while (row <= 9 && column >= 0)
	{
		if (matrix[row][column])
			return (0);
		row++;
		column--;
	}
	row = i + 1;
	column = j + 1;
	while (--row >= 0 && --column >= 0)
		if (matrix[row][column])
			return (0);
	return (1);
}

//	Verifies recursively every row if its a valid position to put a queen
void	ft_solve(int matrix[10][10], int column, int *solutions)
{
	int	i;

	if (column == 10)
	{
		*solutions += 1;
		ft_print_solution(matrix);
		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (ft_is_valid(matrix, i, column))
		{
			matrix[i][column] = 1;
			ft_solve(matrix, column + 1, solutions);
			matrix[i][column] = 0;
		}
		i++;
	}
	return ;
}

//	Builds and 10x10 matrix withs 0`s and returns number of possible solutions
//	to an 10x10 queen problem
int	ft_ten_queens_puzzle(void)
{
	int	matrix[10][10];
	int	solutions;

	ft_empty_matrix(matrix);
	solutions = 0;
	ft_solve(matrix, 0, &solutions);
	return (solutions);
}
