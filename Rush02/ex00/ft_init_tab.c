/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:41:19 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/24 17:41:21 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr2.h"

void	ft_init_tab(char **tab, char **argv, int i)
{
	int		j;

	j = ft_size_malloc(i) - 1;
	while (i > 0)
	{
		if (i >= 3)
			tab[j] = ft_split3(&argv[1][i - 3], 0);
		else if (i == 2)
			tab[j] = ft_split3(&argv[1][i - 2], 1);
		else if (i == 1)
			tab[j] = ft_split3(&argv[1][i - 1], 2);
		j--;
		i -= 3;
	}
}
