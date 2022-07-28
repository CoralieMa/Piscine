/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libr2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:41:08 by sennasse          #+#    #+#             */
/*   Updated: 2022/07/24 20:33:02 by ercurtaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBR2_H
# define LIBR2_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putnbr2(int nb);
int		ft_check_str(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_split3(char *tab, int len);
int		ft_size_malloc(int len);
void	ft_convert_nbr_to_word(int nb);
void	ft_convert_nbr_to_word_01(char **tab);
void	ft_convert_to_index(char **tab, int len);
void	ft_init_tab(char **tab, char **argv, int i);
int		main(int argc, char **argv);

#endif
