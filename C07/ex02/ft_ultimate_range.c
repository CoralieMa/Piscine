/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:42:44 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 17:12:12 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	i = 0;
	tab = malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}

/*#include <stdio.h>

int main(void)
{
	int *tab;
	int i = ft_ultimate_range(&tab, 1, 9);
	int x;

	
	printf("%d\n\n", i);
	x = 0;
	while (tab[x])
	{
		printf("%d", tab[x]);
		x++;
	}
}*/
