/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:58:18 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/07 15:29:26 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_write(int tab[3])
{
	char	c;

	c = tab[0] + '0';
	write(1, &c, 1);
	c = tab[1] + '0';
	write(1, &c, 1);
	c = tab[2] + '0';
	write(1, &c, 1);
	if (tab[0] + tab[1] + tab[2] != 24)
	{
		c = ',';
		write(1, &c, 1);
		c = ' ';
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	int		tab[3];

	tab[0] = 0;
	while (tab[0] < 10)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] < 10)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] < 10)
			{
				ft_write(tab);
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
/*int main()
{
	ft_print_comb();
	return(0);
}*/
