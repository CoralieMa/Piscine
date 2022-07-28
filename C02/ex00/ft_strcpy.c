/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:29:29 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 18:26:07 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int main(void)
{
	char str1[20] = "C programming";
	char str2[20];
	char str3[20] = "C programming";
	char str4[20];

	ft_strcpy(str2, str1);
	strcpy(str4, str3);
	printf("%s", str2);
	printf("%s", str4);
}*/
