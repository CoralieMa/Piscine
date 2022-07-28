/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:24:27 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/24 20:35:37 by ercurtaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr2.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		len;
	char	**tab;

	if (argc == 2 || argc == 3)
	{
		if (ft_check_str(argv[1]) == 1 || ft_strlen(argv[1]) >= 37)
		{
			write(1, "Error\n", 7);
		}
		if (argc == 3)
		{
			write(1, "to do", 5);
		}
	}
	else
	{
		write(1, "Error\n", 7);
		return (0);
	}
	len = ft_strlen(argv[1]);
	tab = malloc(sizeof(tab) * (ft_size_malloc(len) + 1));
	tab[ft_size_malloc(len)] = "\0";
	ft_init_tab(tab, argv, len);
	ft_convert_to_index(tab, len);
	return (0);
}
