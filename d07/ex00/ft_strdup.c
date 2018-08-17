/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:42:21 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/16 14:28:49 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*src++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *tmp;
	char *dest;

	if (!(dest = malloc(sizeof(char) * (1 + ft_strlen(src)))))
		return (0);
	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
