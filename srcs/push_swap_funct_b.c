/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_funct_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:00:51 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/28 20:08:51 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	sb (swap b): Swap the first 2 elements at the top of stack b.
	Do nothing if there is only one or no elements.
*/
void	sb(t_ps *ps)
{	
	int	tmp;

	tmp = ps->s_b->nb;
	ps->s_b->nb = ps->s_b->next->nb;
	ps->s_b->next->nb = tmp;
	ft_putstr_fd("sb\n", 1);
}

// /*
// 	pb (push b): Take the first element at the top of a and put it at the top of b.
// 	Do nothing if a is empty.
// */
// void	pb(t_ps *ps)
// {
// 	ft_putstr_fd("pb\n", 1);
// }

/*
	rb (rotate b): Shift up all elements of stack b by 1.
	The first element becomes the last one.
*/
void	rb(t_ps *ps)
{
	ft_swap(&ps->s_b->nb, &ps->s_b->prev->nb);
	ps->s_b = ps->s_b->prev;
	while (ps->s_b->prev != ps->h_a)
	{
		ft_swap(&ps->s_b->nb, &ps->s_b->prev->nb);
		ps->s_b = ps->s_b->prev;
	}
	ps->s_b = ps->s_b->prev;
	ft_putstr_fd("rb\n", 1);
}

// /*
// 	rrb (reverse rotate b): Shift down all elements of stack b by 1.
// 	The last element becomes the first one.
// */
// void	rrb(t_ps *ps)
// {
// 	ft_putstr_fd("rrb\n", 1);
// }
