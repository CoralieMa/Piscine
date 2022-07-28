/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:47:48 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/07 16:41:48 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_two_nbr(int nb)
{
	char	c;
	int		mod;

	mod = nb % 10;
	c = (nb - mod) / 10 + '0';
	write(1, &c, 1);
	c = mod + '0';
	write(1, &c, 1);
}

void	ft_aff(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = '0';
		write(1, &c, 1);
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_two_nbr(nb);
	}
}

void	ft_write(int nb1, int nb2)
{
	char	c;

	ft_aff(nb1);
	c = ' ';
	write(1, &c, 1);
	ft_aff(nb2);
	if (nb1 != 98 || nb2 != 99)
	{
		c = ',';
		write(1, &c, 1);
		c = ' ';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	while (nb1 < 100)
	{
		nb2 = nb1 + 1;
		while (nb2 < 100)
		{
			ft_write(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
/*int main()
{
	ft_print_comb2();
	return(0);
}*/
