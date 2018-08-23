/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:20:14 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/22 10:48:46 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"

void	ft_add(int x, int y)
{
	ft_putnbr(x + y);
}

void	ft_sub(int x, int y)
{
	ft_putnbr(x - y);
}

void	ft_mul(int x, int y)
{
	ft_putnbr(x * y);
}

void	ft_div(int x, int y)
{
	if (!y)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(x / y);
}

void	ft_mod(int x, int y)
{
	if (!y)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(x % y);
}

t_opp	g_opp[] =
{
	{ "+", ft_add },
	{ "-", ft_sub },
	{ "*", ft_mul },
	{ "/", ft_div },
	{ "%", ft_mod },
	{ "", 0 }
};
