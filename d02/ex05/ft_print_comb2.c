/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 23:17:01 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/03 11:33:59 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putnbr(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int comb2[2];

	*comb2 = 0;
	while (*comb2 <= 98)
	{
		comb2[1] = *comb2 + 1;
		while (comb2[1] <= 99)
		{
			ft_putnbr(comb2[0]);
			ft_putchar(' ');
			ft_putnbr(comb2[1]++);
			if (*comb2 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		++*comb2;
	}
}
