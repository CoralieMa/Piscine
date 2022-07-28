/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:49:17 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/11 15:54:36 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 32)
			return (0);
		a++;
	}
	return (1);
}

/*int main(void)
{
	int a;
	
	a = ft_str_is_printable("jhlkhlhghjbkj");
	printf("%d", a);
}*/
