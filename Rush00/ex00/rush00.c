/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 14:59:36 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 17:10:20 by bdevessi         ###   ########.fr       */
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
				ft_putchar((!col || col == x - 1) ? 'o' : '-');
			else
				ft_putchar((!col || col == x - 1) ? '|' : ' ');
		}
		ft_putchar('\n');
	}
}
