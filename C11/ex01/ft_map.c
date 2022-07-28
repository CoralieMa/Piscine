/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:49:27 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 10:49:29 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab_return;

	i = 0;
	tab_return = malloc(sizeof(tab_return) * length);
	if (!tab_return)
		return (0);
	while (i < length)
	{
		tab_return[i] = f(tab[i]);
		i++;
	}
	return (tab_return);
}

/*#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ft_nbr(int nb)
{
	return (nb * 2);
}

int main(void)
{
	int		tab[5];
	int		*tab2;
	int i = 0;
	
	tab[0] = 1;
	tab[1] = -21;
	tab[2] = 0;
	tab[3] = 5;
	tab[4] = 651;
	tab2 = ft_map(tab, 0, &ft_nbr);
	while (i < 5)
	{
		ft_putnbr(tab2[i]);
		write(1, "\n", 1);
		i++;
	}
}*/