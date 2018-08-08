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

	string = NULL;
	substring = NULL;
	while (*str)
	{
		string = str;
		substring = to_find;
<<<<<<< HEAD
=======

>>>>>>> f43e77557c19e73cfe38b3eef959a10a432b14d9
		while (*str && *substring && *str++ == *substring)
			substring++;
		if (!*substring)
			return (string);
		str = string + 1;
	}
	return (0);
}
