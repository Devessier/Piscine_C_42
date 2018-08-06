/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:28:23 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/06 15:06:00 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 8

int		is_position_correct(int queens_columns[N], int row, int line)
{
	int y_pos;
	int x_pos;

	y_pos = -1;
	if (!line)
		return (1);
	while (++y_pos < line)
	{
		x_pos = y_pos[queens_columns];
		if (x_pos == row
				|| x_pos == row + line - y_pos
				|| x_pos == row - line + y_pos)
			return (0);
	}
	return (1);
}

int		backtracking_solving(int queens_columns[N], int line)
{
	int row;
	int total;

	row = -1;
	total = 0;
	while (++row < N)
	{
		if (is_position_correct(queens_columns, row, line))
		{
			queens_columns[line] = row;
			if (line == N - 1)
				total++;
			else
				total += backtracking_solving(queens_columns, line + 1);
		}
	}
	return (total);
}

int		ft_eight_queens_puzzle(void)
{
	int queens_columns[N];

	return (backtracking_solving(queens_columns, 0));
}
