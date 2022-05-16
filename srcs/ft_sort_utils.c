/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:10:10 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:44:04 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Checks if stack A is fully sorted and returns true or false accordingly.
 * why t_bool? was about time for me to figure out how the system works so
 * I wasn't sure if I was allowed to use booleans as per the norm so I made my
 * own.
 * 
 * Note: Idk it was basic.. potentially doable in recursive?
 */
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

/**
 * hmm yeah this guy is there for a mini ducktape purpose. So same thing as
 * his brother above but it checks for a specific list. idk why im duplicating
 * myt code really I could have used this for the rest but figured it was a nice
 * practice to recode. This has a flaw since I do not check if b is null but the
 * way I am using it makes me not really need it.
 */
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

/**
 * Ahhhhh. bye bye negatives...
 * Some times in life nothing really matters... so
 * why use the numbers when all you need is their position.
 * It essentially compares the sorted stack to the unsorted one
 * and takes the final position of the number in order to assign
 * the index value. from 0 to whatever as long as it is in
 * an unsigned int in order to make sure we can still handle
 * the same amount of numbers from -2147183648 to 2147483647
 * 
 * can we get a hawyeh???
 * 
 * Note: I am pretty sure there is a more efficient way to do it
 * but yeah this is what I am doing for now.
 */
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
