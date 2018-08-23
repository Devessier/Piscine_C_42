/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:37:08 by bdevessi          #+#    #+#             */
/*   Updated: 2018/08/21 11:02:32 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H

t_opp g_opptab[] =
{
	{ "+", ft_add },
	{ "-", ft_sub },
	{ "*", ft_mul },
	{ "/", ft_div },
	{ "%", ft_mod },
	{ "", ft_usage }
};

#endif
