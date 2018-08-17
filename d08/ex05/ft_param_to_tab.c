/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:49:03 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/16 10:36:43 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char					*ft_strdup(char *str)
{
	int		len;
	char	*dest;
	char	*tmp;

	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	tmp = dest;
	while (*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*tab;
	int				i;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
	}
	tab[ac] = (t_stock_par){ 0, 0, 0, 0 };
	return (tab);
}
