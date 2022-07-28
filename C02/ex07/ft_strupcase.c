/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:32:31 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 08:01:23 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_verif(char *str, int i)
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

char	*ft_strupcase(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		ft_verif(str, a);
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[20] = "bonjaou5r";

	ft_strupcase(str);
	printf("%s", str);
}*/
