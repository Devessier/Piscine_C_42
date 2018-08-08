/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:33:10 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/08 20:01:17 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i[dest] && i < size)
		i++;
	while (*src && i < size - 1)
		dest[i++] = *src++;
	if (i == size)
		dest[i] = '\0';
	while (*src++)
		i++;
	return (i);
}
