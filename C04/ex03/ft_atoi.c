/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:20:54 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 18:18:13 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc(char *str, int cnt)
{
	int		i;
	int		j;
	int		mult;
	int		nb;

	i = 0;
	j = 0;
	mult = 1;
	nb = 0;
	while (cnt > j)
	{
		nb += (str[i] - 48) * mult;
		i--;
		j++;
		mult = mult * 10;
	}
	return (nb);
}

int	ft_calc_sign(char *str)
{
	int		nb_sign;
	int		nb_return;
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	nb_return = 0;
	nb_sign = 1;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			nb_sign = -nb_sign;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		cnt++;
		i++;
	}
	nb_return = nb_sign * ft_calc(&str[i - 1], cnt);
	return (nb_return);
}

int	ft_atoi(char *str)
{
	int		cnt;
	int		tot;

	cnt = 0;
	while ((str[cnt] == ' ' || (str[cnt] > 8 && str[cnt] < 14)) && str[cnt + 1])
		cnt++;
	if ((str[cnt] > 47 && str[cnt] < 58) || (str[cnt] == 45 || str[cnt] == 43))
	{
		tot = ft_calc_sign(&str[cnt]);
		return (tot);
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi("\f 			 	  	---+++--4854sdasd2244"));
}*/
