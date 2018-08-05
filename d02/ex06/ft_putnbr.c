/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:13:07 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 17:18:39 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	int higher_10_pow;
	int tmp;
	int mod;

	mod = 1;
	higher_10_pow = 1;
	if (nb < 0)
	{
		mod = -1;
		ft_putchar('-');
	}
	tmp = nb;
	while (tmp /= 10)
		higher_10_pow *= 10;
	while (higher_10_pow)
	{
		ft_putchar(nb / higher_10_pow % 10 * mod + '0');
		higher_10_pow /= 10;
	}
}
