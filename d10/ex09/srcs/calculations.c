/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:16:14 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/22 11:20:28 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"
#include "ft_opp.h"

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
	while (ft_strlen(g_opptab[++i].opp))
		if (!ft_strcmp(g_opptab[i].opp, operator))
			return (g_opptab[i].fn(x, y));
	ft_usage(x, y);
}

void		ft_usage(int x, int y)
{
	int		i;
	int		count;

	(void)x;
	(void)y;
	i = -1;
	count = 0;
	ft_putstr("error : only [");
	while (ft_strlen(g_opptab[count].opp))
	{
		ft_putchar(' ');
		ft_putstr(g_opptab[count++].opp);
	}
	ft_putstr(" ] are accepted.\n");
}
