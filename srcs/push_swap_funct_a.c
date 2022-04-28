/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_funct_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:00:52 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/29 01:04:33 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	sa (swap a): Swap the first 2 elements at the top of stack a
	Do nothing if there is only one or no elements.
*/
void	sa(t_ps *ps)
{
	int	tmp;

	tmp = ps->s_a->nb;
	ps->s_a->nb = ps->s_a->next->nb;
	ps->s_a->next->nb = tmp;
	ft_putstr_fd("sa\n", 1);
}

/*
	ra (rotate a): Shift up all elements of stack a by 1.
	The first element becomes the last one.
*/
void	ra(t_ps *ps)
{
	ft_swap(&ps->s_a->nb, &ps->s_a->prev->nb);
	ps->s_a = ps->s_a->prev->prev;
	while (ps->s_a->prev != ps->h_a)
	{
		ft_swap(&ps->s_a->nb, &ps->s_a->next->nb);
		ps->s_a = ps->s_a->prev;
	}
	ft_swap(&ps->s_a->nb, &ps->s_a->next->nb);
	ps->s_a = ps->s_a->prev;
	ft_putstr_fd("ra\n", 1);
}

/*
	pa (push a): Take the first element at the top of b and put it at the top of a
	Do nothing if b is empty.
*/
//void	pa(t_ps *ps)
//{
//	ft_putstr_fd("pa\n", 1);
//}

/*
	rra (reverse rotate a): Shift down all elements of stack a by 1.
	The last element becomes the first one.
*/
// void	rra(t_ps *ps)
// {
// 	ft_swap(&ps->s_a->next->nb, &ps->s_a->nb);
// 	ps->s_a = ps->s_a->next;
// 	while (ps->s_a->next != ps->h_a)
// 	{
// 		ft_swap(&ps->s_a->next->nb, &ps->s_a->nb);
// 		ps->s_a = ps->s_a->next;
// 	}
// 	ps->s_a = ps->s_a->next;
// 	ft_putstr_fd("rra\n", 1);
// }
