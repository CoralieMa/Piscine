/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:46:57 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/27 10:47:00 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = ft_strlen(tab);
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (tab[j][0] > tab[j + 1][0])
			{
				ft_swap_tab(tab, j);
				j--;
			}
			else if (tab[j][0] == tab[j + 1][0])
			{
				ft_same(tab, j, i);
			}
			j++;
		}
		i++;
	}
}

/*#include <unistd.h>

int	main(int argc, char **argv)
{
	
	int		i;
	int		j;

	ft_sort_string_tab(&argv[1]);
	argc++;
	i = 1;
	
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}*/