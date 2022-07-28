/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:53:54 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/23 11:36:53 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_convert_to_int(char *str, char *base)
{
	int					i;
	int					j;
	unsigned int		nb;
	int					len_base;

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

int	ft_atoi(char *str, char *base)
{
	int					cnt;
	int					nb_sign;
	unsigned int		a;

	cnt = 0;
	nb_sign = 1;
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
		a = ft_convert_to_int(&str[cnt], base);
		if (a != 2147483648)
			return (a * nb_sign);
		else
			return (-2147483648);
	}
	return (0);
}
