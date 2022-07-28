/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:34 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 11:51:23 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len_base_ok(int len, char *base)
{
	int		i;
	int		j;

	i = 0;
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == 32 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_base(unsigned int nb, int len, char *base)
{
	char	c;

	if (nb >= 1)
	{
		c = base[nb % len];
		nb = nb / len;
		ft_convert_base(nb, len, base);
		ft_putchar(c);
	}
}

int	ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len_base;
	int				len_base_ok;
	unsigned int	nb;

	len_base = ft_strlen(base);
	len_base_ok = ft_len_base_ok(len_base, base);
	if (nbr == 0 && len_base_ok)
		ft_putchar('0');
	else
	{
		if (nbr < 0 && len_base_ok)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		nb = nbr;
		if (len_base_ok)
			ft_convert_base(nb, len_base, base);
	}
}
