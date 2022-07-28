/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:57:13 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 15:23:33 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		a;

	a = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		nb = a * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*int main(void)
{
	int a = ft_recursive_power(5, -1);
	printf("%d", a);
}*/
