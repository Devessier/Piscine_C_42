/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 14:59:36 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 17:10:07 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int col;
	int row;

	row = -1;
	if (x <= 0 || y <= 0)
		return ;
	while (++row < y)
	{
		col = -1;
		while (++col < x)
		{
			if (!row || row == y - 1)
			{
				if (!col || col == x - 1)
					ft_putchar(((!col && !row) || (col && row)) ? 'A' : 'C');
				else
					ft_putchar('B');
			}
			else
				ft_putchar((!col || col == x - 1) ? 'B' : ' ');
		}
		ft_putchar('\n');
	}
}
