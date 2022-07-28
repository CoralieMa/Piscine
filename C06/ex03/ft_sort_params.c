/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:13:16 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/16 15:49:11 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_affiche(char **tab)
{
	int		i;
	int		j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap_tab(char **tab, int i)
{
	char		*temp;

	temp = tab[i + 1];
	tab[i + 1] = tab[i];
	tab[i] = temp;
}

void	ft_same(char **tab, int j, int i)
{
	int		a;

	a = 1;
	while (tab[j][a] == tab[j +1][a] && a > 0 && tab[i][j] && tab[i + 1][j])
		a++;
	if (tab[j][a] > tab[j +1][a])
		ft_swap_tab(tab, j);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (argv[j][0] > argv[j + 1][0])
			{
				ft_swap_tab(argv, j);
				j--;
			}
			else if (argv[j][0] == argv[j + 1][0])
			{
				ft_same(argv, j, i);
			}
			j++;
		}
		i++;
	}
	ft_affiche(argv);
}
