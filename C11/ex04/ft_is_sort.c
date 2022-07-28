/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:59:21 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 13:59:30 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_nb(int a, int b)
{
	return (a - b);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		nb;

	if (length < 3)
		return (1);
	i = 1;
	nb = 1;
	while (i < length && f(tab[i - 1], tab[i]) == 0)
		i++;
	if (i != length && f(tab[i - 1], tab[i]) < 0)
		nb = -1;
	while (i < length)
	{
		if (f(tab[i -1], tab[i]) * nb < 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	tab[3];

	tab[0] = 2;
	tab[1] = 2;
	tab[2] = 2;
	tab[3] = 8;
	tab[4] = 2;
	tab[5] = 2;
	tab[6] = 2;
	printf("%d\n", ft_is_sort(tab, 0, &ft_nb));
}*/