/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:33:10 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 19:30:26 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;
	int		s;

	i = 0;
	j = 0;
	s = size;
	while (i[dest] && s--)
		i++;
	while (j[src] && s--)
		dest[i++] = src[j++];
	//printf("%s|%s|%d\n", dest + i, src + j, i + j);
	dest[i] = '\0';
	/*i = -1;
	while (*dest)
	{
		dest++;
		i++;
	}
	while ((unsigned int)++i < (size - 2) && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);*/
	return (i + j - size);
}
