/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:36 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/19 23:58:24 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	set of numbers, or string of numbers, 
	12 432 54 54 6 "12 77 45 76 8 96" 79 67 3467
*/

int	ft_parser(t_ps *ps)
{
	size_t	i;

	i = 1;
	while ((int)i < ps->ac)
	{
		ft_new_node(ft_atoi(ps->av[i]), ps);
		ps->s_a = ps->s_a->next;
		i++;
	}
	ft_print_list(ps->s_a, ps);
	// ft_printf("SA nb = %d\n", ps->s_a->nb);
	// ft_printf("SB nb = %d\n", ps->s_b->nb);
	return (0);
}
