/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:36:22 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 18:33:56 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	verif(char *str, int i)
{
	char	c;

	c = 'A';
	while (c <= 'Z')
	{
		if (str[i] == c)
			str[i] = c + 32;
		c++;
	}
}

char	*ft_strlowcase(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		verif(str, a);
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[20] = "BonJou5r";

	ft_strlowcase(str);
	printf("%s", str);
}*/
