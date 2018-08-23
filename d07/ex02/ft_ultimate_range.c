/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:53:57 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/17 11:54:24 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;

	if (min >= max)
		return ((int)(*range = 0));
	len = max - min;
	if (!(*range = malloc(sizeof(int) * len)))
		return (0);
	while (min < max)
		*(*range)++ = min++;
	*range -= len;
	return (len);
}
