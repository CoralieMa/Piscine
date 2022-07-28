/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:48:38 by kderhet           #+#    #+#             */
/*   Updated: 2022/07/17 18:42:22 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_col_down(int tab[5][5], char *tab_nb)
{
	int	x;
	int	y;
	int	nb;

	x = 1;
	y = 4;
	nb = 0;
	while (x < 5)
	{
		if (tab_nb[nb] == 49)
		{
				tab[x][y] = 4;
		}
		if (tab_nb[nb] == 52)
		{
			tab[x][y] = 1;
			tab[x - 1][y] = 2;
			tab[x - 2][y] = 3;
			tab[x - 3][y] = 4;
		}
		x++;
		nb += 2;
	}
}

void	ft_col_up(int tab[5][5], char *tab_nb)
{
	int	x;
	int	y;
	int	nb;

	x = 1;
	y = 1;
	nb = 0;
	while (x < 5)
	{
		if (tab_nb[nb] == 49)
			tab[x][y] = 4;
		if (tab_nb[nb] == 52)
		{
			tab[x][y] = 1;
			tab[x + 1][y] = 2;
			tab[x + 2][y] = 3;
			tab[x + 3][y] = 4;
		}
		x++;
		nb += 2;
	}
}

void	ft_init(int tab[5][5])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_print_result(int tab[5][5])
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			c = '0' + tab[i][j];
			write(1, &c, 1);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
