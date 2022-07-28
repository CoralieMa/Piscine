/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:53:42 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 17:25:50 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_pw(int nb, int pw);

int	ft_is_in_base(char str, char *base);

int	ft_convert_to_int(char *str, char *base, int len);

int	ft_atoi(char *str, char *base);

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

char	*ft_convert_base_final_neg(unsigned int nb, int len_base, char *base)
{
	int		len;
	char	*tab;
	int		nb_temp;
	int		i;

	nb_temp = nb;
	len = 0;
	while (nb_temp >= 1)
	{
		nb_temp = nb_temp / len_base;
		len++;
	}
	tab = (char *)malloc(sizeof(tab) * (len + 2));
	i = len;
	tab[0] = '-';
	while (nb >= 1)
	{
		tab[i] = base[nb % len_base];
		nb = nb / len_base;
		i--;
	}
	tab[len + 1] = '\0';
	return (tab);
}

char	*ft_convert_base_final_pos(unsigned int nb, int len_base, char *base)
{
	int		len;
	char	*tab;
	int		nb_temp;
	int		i;

	nb_temp = nb;
	len = 0;
	while (nb_temp >= 1)
	{
		nb_temp = nb_temp / len_base;
		len++;
	}
	tab = (char *)malloc(sizeof(tab) * (len + 1));
	i = len - 1;
	while (nb >= 1)
	{
		tab[i] = base[nb % len_base];
		nb = nb / len_base;
		i--;
	}
	tab[len] = '\0';
	return (tab);
}

int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*tab;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	if (ft_len_base_ok(base_from) == 0 || ft_len_base_ok(base_to) == 0)
		return (NULL);
	nb = ft_atoi(nbr, base_from);
	if (nb < 0)
		tab = ft_convert_base_final_neg(-nb, ft_len(base_to), base_to);
	if (nb > 0)
		tab = ft_convert_base_final_pos(nb, ft_len(base_to), base_to);
	if (nb == 0)
	{
		tab = (char *)malloc(sizeof(tab) * (2));
		tab[0] = base_to[0];
		tab[1] = '\0';
	}
	return (tab);
}

/*#include <stdlib.h>
#include <stdio.h>
int main(int argc, char ** argv)
{
    char *tab = ft_convert_base(argv[1], "01", "0123456789abcdef");
	argc ++;
	printf("RESULT == %s\n", tab);
}*/