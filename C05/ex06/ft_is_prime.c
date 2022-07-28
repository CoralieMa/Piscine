/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:50:46 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/14 16:02:00 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int main(void)
{
	printf("%d", ft_is_prime(9));
}*/
