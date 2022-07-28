/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:52:32 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 17:15:24 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_create_dest(int size, int len_sep, char **strs)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
		len += len_sep;
	}
	len -= len_sep;
	return (len);
}

char	*ft_fill_dest(int size, char *dest, char *sep, char **strs)
{
	int		i;
	int		j;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[len] = strs[i][j];
			j++;
			len++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[len] = sep[j];
			len ++;
			j++;
		}
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len_sep;
	int		len_dest;

	if (size == 0)
	{
		dest = malloc(sizeof(dest) * 1);
		dest[0] = '\0';
		return (dest);
	}
	if (!sep)
		return (NULL);
	else
	{
		len_sep = ft_len(sep);
		len_dest = ft_create_dest(size, len_sep, strs);
		dest = malloc(sizeof(dest) * (len_dest + 1));
		dest[len_dest] = '\0';
		dest = ft_fill_dest(size, dest, sep, strs);
	}
	return (dest);
}

/*#include <stdio.h>

int		main(void)
{
	char	*strs[] = {
		"Hello",
		"World",
		"",
		"!"
	};
	int		size = 4;
	char	*strjoin = NULL;
	strjoin = ft_strjoin(size, strs, "--");
	printf("%s", strjoin);
	free(strjoin);
	printf("\n%s", ft_strjoin(0, strs, " "));

}*/