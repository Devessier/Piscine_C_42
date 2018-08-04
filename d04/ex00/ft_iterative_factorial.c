/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:50:44 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/04 19:28:42 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (!nb)
		return (1);
	while (++i <= nb)
		result *= i;
	return (result);
}
