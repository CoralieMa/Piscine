/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:05:30 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 16:35:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		a;

	a = 3;
	if ((nb % 2 == 0 && nb != 2) || nb < 2)
		return (0);
	while (a < nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		prime;

	prime = 0;
	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);
	while (prime == 0)
	{
		prime = ft_is_prime(nb);
		nb++;
	}
	return (nb - 1);
}

/*int main(void)
{
	printf("%d", ft_find_next_prime(55));
}*/
