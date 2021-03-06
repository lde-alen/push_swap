/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_funct_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:00:52 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 10:29:24 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * sa (swap a): Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
 */
void	sa(t_ps *ps)
{
	ft_swap(&ps->s_a->nb, &ps->s_a->next->nb);
	ft_swap_u(&ps->s_a->index, &ps->s_a->next->index);
	ft_putstr_fd("sa\n", 1);
}

/**
 * ra (rotate a): Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 */
void	ra(t_ps *ps)
{
	ps->s_a = ps->s_a->next;
	ps->h_a = ps->s_a;
	ps->t_a = ps->s_a->prev;
	ft_putstr_fd("ra\n", 1);
}

/**
 * pa (push a): Take the first element at the top of b and put it at the top of a
 * Do nothing if b is empty.
 */
void	pa(t_ps *ps)
{
	t_node	*tmp;

	tmp = ps->s_b;
	if (!ps->s_b)
		return ;
	else if (!ps->s_a)
		ft_first_node_a(ps, tmp);
	else if (ps->s_b->next == ps->h_b
		&& ps->s_b->prev == ps->h_b)
		ft_last_node_b(ps, tmp);
	else
	{
		ps->s_b = ps->s_b->next;
		ps->s_b->prev = ps->t_b;
		ps->t_b->next = ps->s_b;
		ps->h_b = ps->s_b;
		ps->s_a->prev = tmp;
		ps->s_a->prev->next = ps->s_a;
		ps->s_a = ps->s_a->prev;
		ps->s_a->prev = ps->t_a;
		ps->h_a = ps->s_a;
		ps->t_a->next = ps->s_a;
	}
	ft_putstr_fd("pa\n", 1);
}

/**
 * rra (reverse rotate a): Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 */
void	rra(t_ps *ps)
{
	ps->s_a = ps->s_a->prev;
	ps->h_a = ps->s_a;
	ps->t_a = ps->s_a->prev;
	ft_putstr_fd("rra\n", 1);
}
