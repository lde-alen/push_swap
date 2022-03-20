/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:36 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/20 13:00:56 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	set of numbers, or string of numbers,
	12 432 54 54 6 "12 77 45 76 8 96" 79 67 3467
*/
int	ft_parser(t_ps *ps)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ps->ac)
	{
		if (ps->s_a->next == NULL && ps->s_a->prev == NULL)
		{
			ps->s_a->nb = ft_atoi(ps->av[i]);
			ft_printf("First node number %d, nb = %d\n", ps->s_a->index, ps->s_a->nb);
			ps->s_a->prev = ps->s_a;
			ps->s_a->next = ps->h_a;
			j++;
			i++;
		}
		else
		{
			ps->s_a->next = ft_add_last(ft_atoi(ps->av[i]), ps);
			ps->s_a = ps->s_a->next;
			ft_printf("First node number %d, nb = %d\n", ps->s_a->index, ps->s_a->nb);
			j++;
			i++;
		}
	}
	ft_print_list(ps->h_a);
	return (0);
}
