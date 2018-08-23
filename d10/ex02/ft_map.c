/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:51:17 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/21 11:26:50 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*tmp;
	int		i;

	if (!(tmp = malloc(sizeof(int) * length)))
		return (NULL);
	i = -1;
	while (++i < length)
		*tmp++ = f(*tab++);
	return (tmp - length);
}
