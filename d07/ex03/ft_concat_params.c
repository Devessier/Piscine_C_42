/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:31:09 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/16 18:31:15 by bdevessi         ###   ########.fr       */
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

char	*ft_concat_params(int argc, char **argv)
{
	char	*tmp;
	int		len;
	int		i;

	argc--;
	argv++;
	i = -1;
	len = 0;
	while (++i < argc)
		len += ft_strlen(argv[i]) + 1;
	if (!(tmp = malloc(sizeof(char) * len)))
		return (0);
	i = -1;
	while (++i < argc)
	{
		while (*argv[i])
			*tmp++ = *argv[i]++;
		*tmp++ = '\n';
	}
	*(tmp - 1) = '\0';
	return (tmp - len);
}
