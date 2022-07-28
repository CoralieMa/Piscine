/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:16:22 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/13 15:47:06 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int		a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	len_cat;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || len_dest >= size)
		return (len_src + size);
	i = 0;
	len_cat = len_dest + len_src;
	while (src[i] && dest[i] && i < size - len_dest - 1)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (len_cat);
}

/*int main(void)
{
    char str1[30] = "Bonjour ";
    char str2[20] = "Coralie";
    char str3[30] = "Bonjour ";
    char str4[20] = "Coralie";

	unsigned int a;

    a = ft_strlcat(str1, str2, 30);
    printf("%u\n", a);
	printf("%s\n", str1);
    a = strlcat(str3, str4, 30);
    printf("%u\n", a);
	printf("%s\n", str3);
}*/
