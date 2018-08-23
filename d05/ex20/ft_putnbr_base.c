/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:23:46 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/09 10:18:41 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 100

void	ft_putchar(char c);

int		base_length(char *base)
{
	int len;

	len = 0;
	while (*base++)
		len++;
	return (len);
}

int		check_symbols(char *base, int radix)
{
	int i;
	int j;

	j = -1;
	while (base[++j])
	{
		i = j;
		if (!(base[j] >= '!'
					&& base[j] <= '~'
					&& !(base[j] == '+' || base[j] == '-')))
			return (0);
		while (++i < radix)
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

int		is_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		return (-1);
	}
	return (1);
}

void	calculations(int nbr, char *base, int radix, int results[N])
{
	int tmp;
	int i;
	int j;
	int higher_radix_power;
	int mod;

	mod = is_negative(nbr);
	tmp = nbr;
	j = 1;
	higher_radix_power = 1;
	while (tmp /= radix)
	{
		higher_radix_power *= radix;
		j++;
	}
	i = j;
	while (higher_radix_power)
	{
		results[j--] = nbr / higher_radix_power % radix * mod;
		higher_radix_power /= radix;
	}
	while (i)
		ft_putchar(base[results[i--]]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			results[N];
	int			radix;

	radix = base_length(base);
	if (radix < 1)
		return ;
	if (!check_symbols(base, radix))
		return ;
	calculations(nbr, base, radix, results);
}
