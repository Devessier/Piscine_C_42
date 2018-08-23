/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:28:23 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/11 20:29:33 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 8

void	ft_putchar(char c);

void	print_results(int queens_columns[N])
{
	int i;

	i = -1;
	while (++i < N)
		ft_putchar(i[queens_columns] + '1');
	ft_putchar('\n');
}

int		is_position_correct(int queens_columns[N], int row, int col)
{
	int y_pos;
	int x_pos;

	if (!col)
		return (1);
	y_pos = -1;
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

void	backtracking_solving(int queens_columns[N], int col)
{
	int row;

	row = -1;
	while (++row < N)
	{
		if (is_position_correct(queens_columns, row, col))
		{
			queens_columns[col] = row;
			if (col == N - 1)
				print_results(queens_columns);
			else
				backtracking_solving(queens_columns, col + 1);
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens_columns[N];

	return (backtracking_solving(queens_columns, 0));
}
