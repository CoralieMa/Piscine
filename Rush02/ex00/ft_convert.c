/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:37:17 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/24 20:30:51 by ercurtaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr2.h"

int	ft_atoi(char *str)
{
	int		len;
	int		ten;
	int		i;
	int		nb;

	len = ft_strlen(str);
	ten = 1;
	i = 1;
	nb = 0;
	while (i < len)
	{
		ten = ten * 10;
		i++;
	}
	i = 0;
	while (i <= len)
	{
		nb = nb + ((str[i] - 48) * ten);
		ten = ten / 10;
		i++;
	}
	return (nb);
}

void	ft_convert_nbr_to_word(int nb)
{
	int		temp;

	if (nb < 20 && nb > 0)
	{
		ft_putnbr(nb);
		nb = -1;
	}
	if (nb >= 20 && nb < 100)
	{
		temp = nb / 10;
		ft_putnbr(temp + 18);
		nb = nb - temp * 10;
	}
	if (nb >= 100)
	{
		temp = nb / 100;
		if (temp != 1)
			ft_putnbr(temp);
		ft_putnbr(28);
		nb = nb - temp * 100;
	}
	if (nb != -1)
		ft_convert_nbr_to_word(nb);
}

void	ft_convert_nbr_to_word_01(char **tab)
{
	if (ft_atoi(tab[0]) == 0)
		ft_putnbr(0);
	if (ft_atoi(tab[0]) == 1)
		ft_putnbr(1);
}

void	ft_convert_to_index(char **tab, int len)
{
	int		i;
	int		j;
	int		nbr;

	i = 0;
	j = ft_size_malloc(len);
	if (j == 1)
		ft_convert_nbr_to_word_01(tab);
	while (i < ft_size_malloc(len))
	{
		nbr = ft_atoi(tab[i]);
		i++;
		j--;
		if (nbr != 0)
		{	
			if (nbr != 1)
				ft_convert_nbr_to_word(nbr);
			else if (i != 1)
				ft_convert_nbr_to_word(nbr);
			if (i != ft_size_malloc(len))
				ft_putnbr(28 + j);
		}	
	}
}
