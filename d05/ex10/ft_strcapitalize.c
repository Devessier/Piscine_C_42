/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:48:51 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/07 11:22:35 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_lowcase(char c)
{
	return (c >= 'a' & c <= 'z');
}

int		is_number(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		is_first;

	tmp = str - 1;
	is_first = 1;
	while (*++tmp)
	{
		is_first = 1;
		while (is_number(*tmp)
				|| is_upcase(*tmp)
				|| is_lowcase(*tmp))
		{
			if (is_first)
			{
				if (is_lowcase(*tmp))
					*tmp -= ' ';
				is_first ^= 1;
			}
			tmp++;
		}
	}
	return (str);
}
