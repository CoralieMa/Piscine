/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:52:45 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/26 15:01:05 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_op_ok(char *op)
{
	if (ft_strlen(op) != 1)
	{
		write(1, "0", 1);
		return (-1);
	}
	else if (op[0] == '+')
		return (0);
	else if (op[0] == '-')
		return (1);
	else if (op[0] == '*')
		return (2);
	else if (op[0] == '/')
		return (3);
	else if (op[0] == '%')
		return (4);
	else
	{
		write(1, "0", 1);
		return (-1);
	}
}
