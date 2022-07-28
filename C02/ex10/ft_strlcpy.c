/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:37:00 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/13 12:41:47 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		a;
	int					len;

	a = 0;
	len = ft_strlen(src);
	while (src[a] && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (len);
}

/*int main(void)
{
	char str1[20] = "Bonjour hello";
	char str2[20];
	char str3[20] = "Bonjour hello";
	char str4[20];

	ft_strlcpy(str2, str1, 20);
	printf("%s\n", str2);
	strlcpy(str4, str3, 20);
	printf("%s", str4);
}*/
