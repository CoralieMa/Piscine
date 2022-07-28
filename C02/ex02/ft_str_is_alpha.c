/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:45:13 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 16:54:54 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(char test)
{	
	char	c;

	c = 'A';
	while (c <= 'z')
	{
		if (test == c)
		{
			return (1);
		}
		if (c == 'Z')
			c = c + 7;
		else
			c++;
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
	char str[20] = "jkhH1hjhHGK";
	int a;

	a = ft_str_is_alpha(str);
	printf("%d", a);
}*/
