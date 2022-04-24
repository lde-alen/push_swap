/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:36:11 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/25 00:57:18 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_dup_check(t_ps *ps)
{
	t_node	*tmp;

	while (ps->s_a->next != ps->h_a)
	{
		tmp = ps->s_a->next;
		while (tmp != ps->h_a)
		{
			if (ps->s_a->nb == tmp->nb)
				ft_fputstr("Error: Duplicated numbers.\n");
			tmp = tmp->next;
		}
		ps->s_a = ps->s_a->next;
	}
}

void	ft_check_errors(int ac, char **av)
{
	int		i;
	int		j;

	if (ac == 1)
		ft_fputstr("Error: Not enough arguments.\n");
	else
	{
		j = 1;
		while (av[j] && j < ac)
		{
			i = 0;
			while (av[j][i])
			{
				if (!ft_isdigit(av[j][i]) && ((av[j][i] != ' '
				&& av[j][i] != '-') || (av[j][i] == '-'
				&& (av[j][i + 1] == 0 || av[j][i + 1] == ' '
				|| (ft_isdigit(av[j][i + 1]) && (i > 0 
				&& (ft_isdigit(av[j][i - 1]))))))))
					ft_fputstr("Error1.\n");
				i++;
			}
			j++;
		}
	}
}
