/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:00:16 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 16:34:23 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long	n;
	int		a;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || !(nb % 2) || !(nb % 3))
		return (0);
	n = 5;
	a = 2;
	while (n * n <= nb)
	{
		if (!(nb % n))
			return (0);
		n += a;
		a = 6 - a;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
