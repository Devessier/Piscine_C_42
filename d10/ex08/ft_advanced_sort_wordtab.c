/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 19:34:04 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/21 11:28:19 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		need_sort;
	int		len;
	char	*tmp;

	len = 0;
	while (tab[len++])
		;
	need_sort = 1;
	while (need_sort)
	{
		i = -1;
		need_sort = 0;
		while (++i < len - 1)
		{
			if (tab[i] && tab[i + 1] && cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				need_sort = 1;
			}
		}
	}
}
