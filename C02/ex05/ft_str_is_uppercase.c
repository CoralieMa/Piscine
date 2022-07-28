/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:42:57 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 07:56:52 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(char test)
{
	char	c;

	c = 'A';
	while (c <= 'Z')
	{
		if (test == c)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
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

	a = ft_str_is_uppercase(str);
	printf("%d", a);
}*/
