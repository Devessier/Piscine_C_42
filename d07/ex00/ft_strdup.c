/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:42:21 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/13 19:20:51 by bdevessi         ###   ########.fr       */
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

	dest = (char *)malloc(sizeof(char) * (1 + ft_strlen(src)));
	if (dest == NULL)
		return (NULL);
	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
