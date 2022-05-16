/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:36:11 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 10:46:18 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Checks for duplicates by looping through all the numbers of the stack and
 * comparing them with the entire stack.
 * 
 * Note: This function should have been better if I actually only gave the stack
 * as parameter instead of giving the entire main structure. Could also have been
 * done in recursive.
 *
 * Takes as parameter t_ps *ps
 */
void	ft_dup_check(t_ps *ps)
{
	t_node	*tmp;

	while (ps->s_a->next != ps->h_a)
	{
		tmp = ps->s_a->next;
		while (tmp != ps->h_a)
		{
			if (ps->s_a->nb == tmp->nb)
				ft_fputstr("Error\n");
			tmp = tmp->next;
		}
		ps->s_a = ps->s_a->next;
	}
	ps->s_a = ps->s_a->next;
}

/**
 * This function checks for everything! Beffore allocating any memory this
 * function checks if there are only numbers after this function you can
 * expect perfect input.
 * 
 * Note: I am not too proud of this parser as It could have looked better but
 * eh..
 * I really wanted to do it in one function so....kinkey
 */
void	ft_check_errors(int ac, char **av)
{
	int		i;
	int		j;

	if (ac == 1)
		ft_fputstr("Error\n");
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
					ft_fputstr("Error\n");
				i++;
			}
			j++;
		}
	}
}
