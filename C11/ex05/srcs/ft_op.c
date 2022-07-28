/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:07:47 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 16:07:49 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_op(char *nb1, char *op, char *nb2)
{
	int		op_type;
	void	(*f[5])(int, int);

	f[0] = &ft_plus;
	f[1] = &ft_min;
	f[2] = &ft_mult;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	op_type = ft_op_ok(op);
	if (op_type != -1)
		f[op_type](ft_atoi(nb1), ft_atoi(nb2));
}
