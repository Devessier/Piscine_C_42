/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:36:46 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/16 10:36:45 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	int		higher_10_power;
	int		tmp;
	int		mod;

	mod = 1;
	higher_10_power = 1;
	if (nb < 0)
	{
		mod = -1;
		ft_putchar('-');
	}
	tmp = nb;
	while (tmp /= 10)
		higher_10_power *= 10;
	while (higher_10_power)
	{
		ft_putchar(nb / higher_10_power % 10 * mod + '0');
		higher_10_power /= 10;
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	char	*tmp;

	while (par->str)
	{
		ft_putstr(par->copy);
		ft_putnbr(par->size_param);
		i = 0;
		while (par->tab[i])
		{
			tmp = par->tab[i];
			ft_putstr(par->tab[i++]);
		}
		par++;
	}
}
