/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 20:32:19 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 16:15:04 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	float	floating_value;
	int		value;
	int		last;

	value = nb / 2;
	last = nb;
	floating_value = value;
	if (nb <= 0)
		return (0);
	while (value != last)
	{
		last = value;
		floating_value = .5 * ((float)value + (float)nb / value);
		value = floating_value;
	}
	return (floating_value == (float)value ? value : 0);
}
