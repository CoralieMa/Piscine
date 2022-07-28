/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:02:36 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 08:04:07 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char	*tab)
{
	int		len;

	if (!tab)
		return (0);
	len = 0;
	while (tab[len])
		len++;
	return (len);
}

int	ft_is_charset(char *str, char *charset)
{
	int		i;

	i = 0;
	if (ft_len(charset) == 0)
		return (0);
	while (charset[i])
	{
		if (charset[i] == str[0])
			return (1);
		i++;
	}
	return (0);
}

int	ft_len_tab(char	*str, char *charset)
{
	int		i;
	int		nb_sep;

	i = 0;
	nb_sep = 0;
	if (ft_len(str) == 0)
		return (-1);
	while (str[i])
	{
		if (ft_is_charset(&str[i], charset) == 1)
		{
			nb_sep++;
			i++;
			while (ft_is_charset(&str[i], charset) == 1)
				i++;
		}
		else
			i++;
	}
	if (ft_is_charset(str, charset))
		nb_sep--;
	if (ft_is_charset(&str[i - 1], charset))
		nb_sep--;
	return (nb_sep);
}

void	ft_fill_tab(char *tab, char *str, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		a;
	int		cnt;

	if (!str)
		return (NULL);
	tab = malloc(sizeof(*tab) * (ft_len_tab(str, charset) + 2));
	tab[ft_len_tab(str, charset) + 1] = 0;
	i = 0;
	a = 0;
	while (i < ft_len_tab(str, charset) + 1)
	{
		while (ft_is_charset(&str[a], charset) == 1)
				a++;
		cnt = a;
		while (ft_is_charset(&str[a], charset) != 1 && str[a])
			a++;
		tab[i] = malloc(sizeof(tab[i]) * (a - cnt + 1));
		ft_fill_tab(tab[i], &str[cnt], a - cnt);
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = "Pomme, poire, Peche     ";
	char	*charset = ", ";
	char    **tab = ft_split(str, charset);

	//printf("%s\n", tab[0]);
	//printf("%s\n", tab[1]);
	//printf("%s\n", tab[2]);
	//printf("%s\n", tab[3]);
	//printf("%s\n", tab[4]);
	//printf("%s\n", tab[5]);
	//printf("%s\n", tab[6]);
}*/
