/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:32:35 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 15:35:52 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int		cnt;
	int		nb_sign;
	int		nb;

	cnt = 0;
	nb_sign = 1;
	nb = 0;
	while ((str[cnt] == ' ' || (str[cnt] > 8 && str[cnt] < 14)) && str[cnt + 1])
		cnt++;
	while (str[cnt] == 43 || str[cnt] == 45)
	{
		if (str[cnt] == 45)
			nb_sign = -nb_sign;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		nb = nb * 10 + str[cnt] - '0';
		cnt++;
	}
	return (nb_sign * nb);
}
