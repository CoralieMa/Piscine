/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:28:06 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 16:28:08 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_plus(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
}

void	ft_min(int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
}

void	ft_mod(int nb1, int nb2)
{
	if (nb2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(nb1 % nb2);
}

void	ft_div(int nb1, int nb2)
{
	if (nb2 == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(nb1 / nb2);
}

void	ft_mult(int nb1, int nb2)
{
	ft_putnbr(nb1 * nb2);
}
