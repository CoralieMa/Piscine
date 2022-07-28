/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:37:48 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 07:54:12 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(char test)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		if (test == c)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int		a;
	int		test;

	a = 0;
	while (str[a])
	{
		test = ft_verif(str[a]);
		if (test == 0)
			return (0);
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[20] = "";
	int a;

	a = ft_str_is_lowercase(str);
	printf("%d", a);
}*/
