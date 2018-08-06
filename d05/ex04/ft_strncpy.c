/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:40:41 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/06 16:58:47 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int ok;
	char *tmp;

	tmp = dest;
	while (n--)
		*tmp++ = *src ? *src++ : 0;
	return (dest);
}
