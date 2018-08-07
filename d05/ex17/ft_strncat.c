/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:21:32 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 13:31:23 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, int nb)
{
	char *tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src && nb--)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
