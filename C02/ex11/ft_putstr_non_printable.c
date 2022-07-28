/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:09:58 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/13 14:35:43 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(int nb, char *base)
{
	char	c;

	if (nb >= 1)
	{
		c = base[nb % 16];
		nb = nb / 16;
		ft_hexa(nb, "0123456789abcdef");
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 32 || str[a] > 127)
		{
			write(1, "\\", 1);
			if (str[a] < 16)
				write(1, "0", 1);
			ft_hexa(str[a], "0123456789abcdef");
		}
		else
			write(1, &str[a], 1);
		a++;
	}
}

/*int main(void)
{
    char str[] = "Cou\rcou\ntu vas b\nien ?";

    ft_putstr_non_printable(str);
}*/
