/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:00:16 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/06 09:20:44 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long n;
	int w;

	if (nb == 2 || nb == 3)
		return (1);
	if (!(nb % 2) || !(nb % 3))
		return (0);
	n = 5;
	w = 2;	
	while (n * n <= nb)
	{
		if (!(nb % n))
			return (0);
		n += w;
		w = 6 - w;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int tmp;

	tmp = nb;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(++tmp))
		;
	return (tmp);
}
