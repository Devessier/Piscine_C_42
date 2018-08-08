/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:48:51 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/08 19:49:51 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		is_first;

	tmp = str - 1;
	is_first = 1;
	while (*++tmp)
	{
		is_first = 1;
		while ((*tmp >= '0' && *tmp <= '9')
				|| (*tmp >= 'A' && *tmp <= 'Z')
				|| (*tmp >= 'a' && *tmp <= 'z'))
		{
			if (is_first)
			{
				if (*tmp >= 'a' && *tmp <= 'z')
					*tmp -= ' ';
				is_first ^= 1;
			}
			tmp++;
		}
	}
	return (str);
}
