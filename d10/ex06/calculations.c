/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:16:14 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/21 13:09:08 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void		calculate(int x, int y, char *operator)
{
	int i;

	i = -1;
	while (ft_strlen(g_opp[++i].opp))
		if (!ft_strcmp(g_opp[i].opp, operator))
			return (g_opp[i].fn(x, y));
	ft_putnbr(0);
}
