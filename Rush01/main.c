/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:40:48 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/17 18:41:34 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_col_down(int tab[5][5], char *tab_nb);
void	ft_col_up(int tab[5][5], char *tab_nb);
void	ft_init(int tab[5][5]);
void	ft_print_result(int tab[5][5]);

int	main(int argc, char **argv)
{
	int	tab_result[5][5];

	(void) argc;
	ft_init(tab_result);
	ft_col_up(tab_result, argv[1]);
	ft_col_down(tab_result, argv[1]);
	ft_print_result(tab_result);
}
