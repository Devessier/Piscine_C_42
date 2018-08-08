/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:36:25 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/08 19:34:59 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *string;
	char *substring;

	while (*str)
	{
		string = str;
		substring = to_find;
		while (*str && *substring && *str++ == *substring)
			substring++;
		if (!*substring)
			return (string);
		str = string + 1;
	}
	return (0);
}
