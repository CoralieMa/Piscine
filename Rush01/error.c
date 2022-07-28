/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:10:19 by dborione          #+#    #+#             */
/*   Updated: 2022/07/17 21:10:23 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_length(char *tab)
{
	int		len;

	len = 0;
	while (tab[len] != '\0')
	{
		if (len != 30)
		{
			if (tab[len + 1] == '\0')
				return (1);
			else
				len++;
		}
		else
		{
			len++;
			if (tab[len] == '\0')
				return (0);
		}
	}
	return (1);
}

int	check_numbers_commas(char *tab)
{
	int		len;

	len = 0;
	while (len < 32)
	{
		if (tab[len] >= 49 && tab[len] <= 52)
		{
			if (tab[len + 1] != 32)
				return (1);
			if ((tab[len + 2] < 49 || tab[len + 2] > 52))
				return (1);
			len = len + 2;
			if (tab[len + 1] == '\0')
				return (0);
		}
		else
			return (1);
	}
	return (1);
}

int	check_four(char *tab)
{
	int		len;

	len = 0;
	while (len < 32)
	{
		if (tab[len] == 52 && len < 23)
		{
			if ((tab[len + 8] != 49))
				return (1);
			len = len + 2;
		}
		else
			return (0);
	}
	return (1);
}

int	check_doubles(char *tab)
{
	int		len;

	len = 0;
	while (len < 32)
	{
		while (len < 7 || (len > 15 && len < 23))
		{
			if (((tab[len] + tab[len + 8]) > 101)
				|| ((tab[len] + tab[len + 8]) < 99))
			{
				return (1);
			}
			len = len + 2;
		}
		len = len + 2;
		if (tab[len + 1] == '\0')
		{
			return (0);
		}	
		len = len + 2;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	{
		if ((check_length(argv[1]) == 1)
			|| (check_numbers_commas(argv[1]) == 1)
			|| (check_four(argv[1]) == 1)
			|| (check_doubles(argv[1]) == 1))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
