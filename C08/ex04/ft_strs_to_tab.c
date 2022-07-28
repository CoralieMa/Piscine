/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:34:55 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 16:06:39 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

void	*ft_cpy(char *src)
{
	int		a;
	char	*cpy;

	a = 0;
	cpy = malloc(sizeof(*cpy) * (ft_strlen(src) + 1));
	if (!cpy)
		return (0);
	while (src[a])
	{
		cpy[a] = src[a];
		a++;
	}
	cpy[a] = src[a];
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(*tab) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = ft_cpy(av[i]);
		tab[i].copy = ft_cpy(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
