/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:45:03 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/21 13:16:01 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATORS_H
# define OPERATORS_H
# include <unistd.h>

typedef enum	e_error
{
	E_NONE,
	E_DIV_MOD_0,
	E_UNKNOWN_OP,
}				t_error;

typedef	void(*t_fn)(int, int);

typedef struct	s_opp
{
	char	*opp;
	t_fn	fn;
}				t_opp;

void			ft_add(int x, int y);
void			ft_sub(int x, int y);
void			ft_mul(int x, int y);
void			ft_div(int x, int y);
void			ft_mod(int x, int y);

extern t_opp	g_opp[];

void			calculate(int x, int y, char *operator);
int				ft_strcmp(char *s1, char *s2);

void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);

#endif
