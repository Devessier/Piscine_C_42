/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:07:02 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/22 16:23:36 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 || !*s2)
		return (*s1 - *s2);
	while (*s1++ == *s2++ && !(!*s1 && !*s2))
		;
	return (*(s1 - 1) - *(s2 - 1));
}

void	ft_sort_wordtab(char **tab)
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
			if (tab[i] && tab[i + 1] && ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				need_sort = 1;
			}
		}
	}
}
