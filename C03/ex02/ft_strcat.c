/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:35:49 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/12 12:57:55 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int		a;
	int		b;

	a = ft_strlen(dest);
	b = 0;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int main(void)
{
	char str1[30] = "Bonjour ";
	char str2[30] = "Coralie";
	char str3[30] = "Bonjour ";
	char str4[30] = "Coralie";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	strcat(str3, str4);
	printf("%s", str3);
}*/
