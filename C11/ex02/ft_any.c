/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:11:19 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 11:11:22 by cmartino         ###   ########.fr       */
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

int	ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	argc++;
	printf("%d\n", ft_any(&argv[1], &ft_ft));
}*/