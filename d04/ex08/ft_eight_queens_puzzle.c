/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:28:23 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 17:36:27 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 8

int		is_position_correct(int queens_columns[N], int row, int col)
{
	int y_pos;
	int x_pos;

	y_pos = -1;
	if (!col)
		return (1);
	while (++y_pos < col)
	{
		x_pos = y_pos[queens_columns];
		if (x_pos == row
				|| x_pos == row + col - y_pos
				|| x_pos == row - col + y_pos)
			return (0);
	}
	return (1);
}

int		backtracking_solving(int queens_columns[N], int col)
{
	int row;
	int total;

	row = -1;
	total = 0;
	while (++row < N)
	{
		if (is_position_correct(queens_columns, row, col))
		{
			queens_columns[col] = row;
			if (col == N - 1)
				total++;
			else
				total += backtracking_solving(queens_columns, col + 1);
		}
	}
	return (total);
}

int		ft_eight_queens_puzzle(void)
{
	int queens_columns[N];

	return (backtracking_solving(queens_columns, 0));
}
