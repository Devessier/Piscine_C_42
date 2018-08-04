/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 19:37:59 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 19:53:56 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	i = 0;
	result = 1;
	while (++i <= power)
		result *= nb;
	return (result);
}
