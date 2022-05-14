/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:28:45 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/15 02:27:44 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_first_node_a(t_ps *ps, t_node *tmp)
{
	ps->s_b = ps->s_b->next;
	ps->s_b->prev = ps->t_b;
	ps->t_b->next = ps->s_b;
	ps->h_b = ps->s_b;
	ps->s_a = tmp;
	ps->s_a-> next = ps->s_a;
	ps->s_a->prev = ps->s_a;
	ps->h_a = ps->s_a;
	ps->t_a = ps->s_a;
}

void	ft_last_node_b(t_ps *ps, t_node *tmp)
{
	ps->s_a->prev = tmp;
	ps->s_a->prev->next = ps->s_a;
	ps->s_a = ps->s_a->prev;
	ps->s_a->prev = ps->t_a;
	ps->h_a = ps->s_a;
	ps->t_a->next = ps->s_a;
	ps->s_b = NULL;
	ps->t_b = NULL;
	ps->h_b = NULL;
}

void	ft_first_node_b(t_ps *ps, t_node *tmp)
{
	ps->s_a = ps->s_a->next;
	ps->s_a->prev = ps->t_a;
	ps->t_a->next = ps->s_a;
	ps->h_a = ps->s_a;
	ps->s_b = tmp;
	ps->s_b-> next = ps->s_b;
	ps->s_b->prev = ps->s_b;
	ps->h_b = ps->s_b;
	ps->t_b = ps->s_b;
}

void	ft_last_node_a(t_ps *ps, t_node *tmp)
{
	ps->s_b->prev = tmp;
	ps->s_b->prev->next = ps->s_b;
	ps->s_b = ps->s_b->prev;
	ps->s_b->prev = ps->t_b;
	ps->h_b = ps->s_b;
	ps->t_b->next = ps->s_b;
	ps->s_a = NULL;
	ps->t_a = NULL;
	ps->h_a = NULL;
}

void	ft_small(t_ps *ps)
{
	if (ps->s_a->index == 4 || ps->s_a->index == 3)
		pb(ps);
	else if (ps->s_a->next->index == 4 || ps->s_a->next->index == 3)
	{
		ra(ps);
		pb(ps);
	}
	else if (ps->s_a->next->next->index == 4 || ps->s_a->next->next->index == 3)
	{
		ra(ps);
		ra(ps);
		pb(ps);
	}
	else
		ft_minimini(ps);
}
