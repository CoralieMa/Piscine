/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:14:05 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 16:58:52 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
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

/*#include <stdio.h>

int main(void)
{
	int *tab = ft_range(1, 9);
	int i = 0;

	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
