/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:33:39 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/12 12:52:53 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

/*int main(void)
{
	char str1[30] = "C programming";
	char str2[30] = "C programming";
	int a = 3;
	
	a = ft_strcmp(str1, str2);
	printf("%d\n", a);
	a = strcmp(str1, str2);
	printf("%d", a);
}*/
