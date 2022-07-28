/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:59:21 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 18:49:50 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	fact = 1;
	if (nb != 0)
		fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}

/*int main(void)
{
	int a = ft_recursive_factorial(6);
	printf("%d", a);
}*/
