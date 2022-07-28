/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:14:40 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/17 09:13:33 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_new_word(char test)
{
	char	c;

	c = '0';
	while (c <= 'z')
	{
		if (test == c)
		{
			return (0);
		}
		if (c == '9')
			c = c + 8;
		else if (c == 'Z')
			c = c + 7;
		else
			c++;
	}
	return (1);
}

void	ft_change_upp(char *str, int i)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		if (str[i] == c)
			str[i] = c - 32;
		c++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		test;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] += 32;
		a++;
	}
	a = 0;
	while (str[a])
	{	
		if (a == 0)
			ft_change_upp(str, a);
		test = ft_str_new_word(str[a]);
		if (test == 1)
			ft_change_upp(str, a + 1);
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[100] = " salut, ComMent tu vas ? 42mots 
	quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}*/
