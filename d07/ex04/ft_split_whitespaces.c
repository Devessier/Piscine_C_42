/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:46:37 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/13 20:01:38 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *tmp;
	char *dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!dest)
		return (NULL);
	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char **tmp;
	char **tmp2;
	char *string;
	int j;

	string = str;
	j = 0;
	while (*string)
	{
		while (*string && !(*string == ' ' || *string == 8 || *string == '\n'))
			string++;
		while (*string && (*string == ' ' || *string == 8 || *string == '\n'))
			*string++ = '\0';
		j++;
	}
	tmp = malloc(sizeof(char *) * ++j);
	tmp2 = tmp;
	while (--j)
	{
		*tmp++ = ft_strdup(str);
		while (*str)
			str++;
		while (!*str)
			str++;
	}
	*tmp = 0;
	return (tmp2);
}
