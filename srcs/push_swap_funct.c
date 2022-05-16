/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_funct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:05:24 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 10:29:36 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Performs sa and sb at the same time.
 * Truth is I was too lazy to do the pointer stuff to actually swap th entire
 * node so ft_swap was faster to type so I swap the two numbers and the two
 * indexes. Haters gonna potate.
 * 
 * Note: shh we dont talk about this.
 */
void	ss(t_ps *ps)
{
	ft_swap(&ps->s_a->nb, &ps->s_a->next->nb);
	ft_swap(&ps->s_b->nb, &ps->s_b->next->nb);
	ft_putstr_fd("ss\n", 1);
}

/**
 * Performs ra and rb at the same time.
 * 
 * Note: Doubly circular linked list has it's props huh?
 */
void	rr(t_ps *ps)
{
	ps->s_a = ps->s_a->next;
	ps->s_b = ps->s_b->next;
	ft_putstr_fd("rr\n", 1);
}

/**
 * Figure it out and read the pdf to lazy to assist.
 */
void	rrr(t_ps *ps)
{
	ps->s_a = ps->s_a->prev;
	ps->s_b = ps->s_b->prev;
	ft_putstr_fd("rrr\n", 1);
}
