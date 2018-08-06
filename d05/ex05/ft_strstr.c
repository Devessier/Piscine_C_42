/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:36:25 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/06 20:53:11 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL 0

char	*ft_strstr(char *str, char *to_find)
{
	char *string;
	char *substring;

	while (*str)
	{
		string = str;
		substring = to_find;

		while (*str && *substring && *str++ == *substring++)
			;
		if (!*substring)
			return string;
		str = string + 1;
	}
	return (NULL);
}
