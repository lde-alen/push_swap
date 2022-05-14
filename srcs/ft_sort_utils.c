/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:10:10 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/14 14:16:14 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_bool	ft_is_sorted(t_ps *ps)
{
	while (ps->s_a->next != ps->h_a)
	{
		if (ps->s_a->nb > ps->s_a->next->nb && !ps->s_b)
			return (false);
		ps->s_a = ps->s_a->next;
	}
	ps->s_a = ps->s_a->next;
	return (true);
}

t_bool	ft_is_sorted2(t_node *list)
{
	t_node	*tmp;

	tmp = list;
	while (list->next != tmp)
	{
		if (list->nb > list->next->nb)
			return (false);
		list = list->next;
	}
	list = list->next;
	return (true);
}

void	ft_assign_index(t_ps *ps)
{
	t_node			*tmp;
	unsigned int	i;

	i = -1;
	tmp = ps->sorted;
	while (ps->sorted->next != tmp)
	{
		while (ps->s_a->nb != ps->sorted->nb)
			ps->s_a = ps->s_a->next;
		ps->s_a->index = ++i;
		ps->sorted = ps->sorted->next;
	}
	while (ps->s_a->nb != ps->sorted->nb)
			ps->s_a = ps->s_a->next;
	ps->s_a->index = ++i;
	ps->s_a = ps->h_a;
	ps->sorted = tmp;
}
