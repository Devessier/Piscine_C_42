/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:27:37 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/01 22:06:42 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	print_result(int *a);

void	ft_print_comb(void)
{
	int a[3];

	*a = '0' - 1;
	while (++*a <= '7')
	{
		*(a + 1) = *a;
		while (++*(a + 1) <= '8')
		{
			*(a + 2) = *(a + 1);
			while (++*(a + 2) <= '9')
			{
				if (*(a + 2) > *(a + 1) && *(a + 1) > *a)
				{
					print_result(a);
				}
			}
		}
	}
}

void	print_result(int *a)
{
	int i;

	i = 0;
	while (i < 3)
	{
		ft_putchar(*(a + i));
		i++;
	}
	if (*a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
