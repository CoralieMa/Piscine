/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:21:33 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/12 11:40:50 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

/*int main(void)
{
	char str[] = "";
	int a;
	a = strlen(str);
	printf("%d\n", a);
	a = ft_strlen(str);
	printf("%d\n", a);
}*/
