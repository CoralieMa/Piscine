/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:15:48 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 15:22:17 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_op(argv[1], argv[2], argv[3]);
		write(1, "\n", 1);
	}
}
