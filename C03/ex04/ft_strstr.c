/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:14:39 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/16 17:25:01 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

int	ft_find(char *str, char *to_find, int a)
{
	int		b;

	b = 0;
	while (to_find[b])
	{
		if (str[a] != to_find[b])
			return (0);
		a++;
		b++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	int		length;
	int		found;
	char	*c;

	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	a = 0;
	while (str[a])
	{
		if (str[a] == to_find[0])
		{
			found = ft_find(str, to_find, a);
			if (found == 1)
			{
				while (str[a])
					return (&str[a]);
			}
		}
		a++;
	}
	c = NULL;
	return (c);
}

/*int main(void)
{
	char str1[] = "Le grand Toto est ici";
	char str2[] = "Toto";

	char *result = strstr(str1, str2);
	printf("%s   ---   %p\n", result, &result);
	result = ft_strstr(str1, str2);
	printf("%s   ---   %p", result, &result);
}*/
