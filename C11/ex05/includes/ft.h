/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:48:42 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/27 09:48:44 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_op_ok(char *op);
int		ft_strlen(char *str);
void	ft_op(char *nb1, char *op, char *nb2);
void	ft_plus(int nb1, int nb2);
void	ft_min(int nb1, int nb2);
void	ft_mod(int nb1, int nb2);
void	ft_div(int nb1, int nb2);
void	ft_mult(int nb1, int nb2);
void	ft_putnbr(int nb);

#endif
