/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:04:52 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 18:31:57 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(char test)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		if (test == c)
			return (1);
		c++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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

	a = ft_str_is_numeric(str);
	printf("%d", a);
	return (0);
}*/
