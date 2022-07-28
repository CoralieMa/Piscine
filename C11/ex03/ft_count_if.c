/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:52:19 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 13:52:21 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int		ft_ft(char *tab)
{
	int i = 0;
	while (tab[i])
		i++;
	if (i > 10)
		return (10);
	return (0);
}*/

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	argc++;
	printf("%d\n", ft_count_if(&argv[1], 4, &ft_ft));
}*/