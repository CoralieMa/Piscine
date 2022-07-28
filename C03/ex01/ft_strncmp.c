/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:03:21 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/13 07:35:18 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				a;
	unsigned int	b;

	a = 0;
	b = 0;
	while ((s1[a] || s2[a]) && b < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
		b++;
	}
	return (0);
}

/*int main(void)
{
	char str1[30] = "C Programming";
	char str2[30] = "C Programmsing";
	int a = 3;

	a = ft_strncmp(str1, str2, 4);
	printf("%d\n", a);
	a = strncmp(str1, str2, 4);
	printf("%d", a);
}*/
