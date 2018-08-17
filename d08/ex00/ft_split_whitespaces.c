/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:46:37 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/17 09:38:44 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define IS_DELIMITER(s) ((s) == ' ' || (s) == '\t' || (s) == '\n')

char	*ft_split_strdup(char *str)
{
	char	*tmp;
	int		n;

	n = 0;
	while (str[n] && !IS_DELIMITER(str[n]))
		n++;
	tmp = malloc(sizeof(char) * (n + 1));
	while (*str && !IS_DELIMITER(*str))
		*tmp++ = *str++;
	*tmp = '\0';
	return (tmp - n);
}

int		nb_words(char *str)
{
	int		wc;
	int		state;

	wc = 0;
	state = 0;
	while (*str)
	{
		if (IS_DELIMITER(*str))
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
		str++;
	}
	return (wc);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;

	len = nb_words(str);
	tab = malloc(sizeof(char *) * (len + 1));
	tab[len] = 0;
	if (!IS_DELIMITER(*str))
		*tab++ = ft_split_strdup(str);
	while (*++str && *(str + 1))
		if (IS_DELIMITER(*str) && !IS_DELIMITER(*(str + 1)))
			*tab++ = ft_split_strdup(++str);
	return (tab - len);
}
