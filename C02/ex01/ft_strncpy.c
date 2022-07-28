/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:31:09 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/13 12:30:07 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*int main(void)
{
	char str1[20] = "C programming";
	char str2[20];
	char str3[20] = "C programming";
	char str4[20];

	ft_strncpy(str2, str1, 5);
	printf("%s", str2);
	strncpy(str4, str3, 5);
	printf("%s", str4);
}*/
