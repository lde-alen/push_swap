/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_funct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:05:24 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/29 19:39:15 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	ss : sa and sb at the same time.
*/
void	ss(t_ps *ps)
{
	int	tmp;

	tmp = ps->s_a->nb;
	ps->s_a->nb = ps->s_a->next->nb;
	ps->s_a->next->nb = tmp;
	tmp = ps->s_b->nb;
	ps->s_b->nb = ps->s_b->next->nb;
	ps->s_b->next->nb = tmp;
	ft_putstr_fd("ss\n", 1);
}

// /*
// 	rr : ra and rb at the same time.
// */
void	rr(t_ps *ps)
{
	ps->s_a = ps->s_a->next;
	ps->s_b = ps->s_b->next;
	ft_putstr_fd("rr\n", 1);
}

/*
	rrr : rra and rrb at the same time.
*/
void	rrr(t_ps *ps)
{
	ps->s_a = ps->s_a->prev;
	ps->s_b = ps->s_b->prev;
	ft_putstr_fd("rrr\n", 1);
}

