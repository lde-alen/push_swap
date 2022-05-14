/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 02:24:14 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/15 02:37:33 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_minimini(t_ps *ps)
{
	if (ps->s_a->next->next->next->index == 4 
		|| ps->s_a->next->next->next->index == 3)
	{
		ra(ps);
		ra(ps);
		ra(ps);
		pb(ps);
	}
	else if (ps->s_a->next->next->next->next->index == 4 
		|| ps->s_a->next->next->next->next->index == 3)
	{
		rra(ps);
		pb(ps);
	}
}

void	ft_combo_large(t_ps *ps)
{
	ft_small(ps);
	ft_small(ps);
	ft_micro(ps);
	pa(ps);
	pa(ps);
	if (ps->s_a->nb > ps->s_a->next->nb)
		sa(ps);
	ra(ps);
	ra(ps);
}
