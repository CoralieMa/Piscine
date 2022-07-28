/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:29:59 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/21 16:47:30 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	while (src[i])
		i++;
	tab = malloc(sizeof(*tab) * (i + 1));
	tab[i] = '\0';
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	*src = "Bonjour";
	char	*tab = ft_strdup(src);

	printf("%s", tab);
}*/
