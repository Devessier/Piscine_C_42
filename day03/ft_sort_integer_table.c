/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:15:17 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 11:37:07 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int tmp;

	i = -1;
	tmp = 0;
	while (++i < size)
	{
		if (i[tab] < tab[i - 1])
		{
			tmp = i[tab];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
	}
}
