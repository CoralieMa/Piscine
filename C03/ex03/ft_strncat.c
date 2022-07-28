/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:59:59 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/15 09:47:11 by cmartino         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					a;
	unsigned int		b;

	a = ft_strlen(dest);
	b = 0;
	while (src[b] && b < nb)
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
    char str1[15] = "Bonjour ";
    char str2[20] = "Coralie";
    char str3[15] = "Bonjour ";
    char str4[20] = "Coralie";

    ft_strncat(str1, str2, 6);
    printf("%s\n", str1);
    strncat(str3, str4, 6);
    printf("%s", str3);
} */
