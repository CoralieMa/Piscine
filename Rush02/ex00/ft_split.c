/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:47:56 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/24 17:47:57 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr2.h"

char	*ft_split3(char *tab, int len)
{
	char	*tab_split;
	int		i;

	tab_split = malloc(sizeof(tab) * 4 - len);
	i = 0;
	while (i < 3 - len)
	{
		tab_split[i] = tab[i];
		i++;
	}
	tab_split[i] = '\0';
	return (tab_split);
}
