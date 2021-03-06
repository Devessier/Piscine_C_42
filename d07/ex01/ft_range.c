/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:51:42 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/17 10:26:00 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tmp;
	int		i;

	if (min >= max || !(tmp = malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
