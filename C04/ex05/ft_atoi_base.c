/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:52:46 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 18:17:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_base_ok(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
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

int	ft_pw(int nb, int pw)
{
	int		nb2;

	if (pw == 0)
		return (1);
	nb2 = nb;
	while (pw > 1)
	{
		nb = nb * nb2;
		pw--;
	}
	return (nb);
}

int	ft_is_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_calcul(char *str, char *base)
{
	int		i;
	int		j;
	int		nb;
	int		len_base;

	i = 0;
	j = 0;
	nb = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	while (ft_is_in_base(str[i], base) != -1)
		i++;
	while (j < i)
	{
		nb += ft_is_in_base(str[j], base) * ft_pw(len_base, i - j - 1);
		j++;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int		cnt;
	int		nb_sign;

	cnt = 0;
	nb_sign = 1;
	if (!ft_len_base_ok(base))
		return (0);
	while ((str[cnt] == ' ' || (str[cnt] > 8 && str[cnt] < 14)) && str[cnt + 1])
		cnt++;
	while (str[cnt] == 43 || str[cnt] == 45)
	{
		if (str[cnt] == 45)
			nb_sign = -nb_sign;
		cnt++;
	}
	if (ft_is_in_base(str[cnt], base) != -1)
	{
		return (nb_sign * ft_calcul(&str[cnt], base));
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi_base("\f -10110010111101", "01"));
}*/
