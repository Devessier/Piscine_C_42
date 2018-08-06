/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:28:23 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/06 15:27:34 by bdevessi         ###   ########.fr       */
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

int		is_position_correct(int queens_columns[N], int row, int line)
{
	int y_pos;
	int x_pos;

	if (!line)
		return (1);
	y_pos = -1;
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

void	backtracking_solving(int queens_columns[N], int line)
{
	int row;

	row = -1;
	while (++row < N)
	{
		if (is_position_correct(queens_columns, row, line))
		{
			queens_columns[line] = row;
			if (line == N - 1)
				print_results(queens_columns);
			else
				backtracking_solving(queens_columns, line + 1);
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens_columns[N];

	return (backtracking_solving(queens_columns, 0));
}
