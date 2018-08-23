/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:50:07 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/22 19:39:43 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		order;

	if (length < 2)
		return (1);
	i = 0;
	while (i < length - 1 && !f(tab[i], tab[i + 1]))
		i++;
	if (i == length - 1)
		return (1);
	order = f(tab[i], tab[i + 1]) < 0;
	while (++i < length - 1)
		if (order ? f(tab[i], tab[i + 1]) > 0 : f(tab[i], tab[i + 1]) < 0)
			return (0);
	return (1);
}
