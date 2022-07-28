/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:35:22 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/24 18:09:03 by ercurtaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr2.h"

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	ft_size_malloc(int len)
{
	if (len % 3 == 0)
		return (len / 3);
	else
		return (len / 3 + 1);
}
