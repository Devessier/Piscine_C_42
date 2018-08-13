/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:51:42 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/13 16:45:51 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tmp;
	int		i;

	if (min >= max)
		return (NULL);
	tmp = malloc(sizeof(int) * (max - min));
	if (!tmp)
		return (NULL);
	i = 0;
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
