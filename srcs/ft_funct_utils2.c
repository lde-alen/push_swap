/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 02:24:14 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:42:42 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 *  It is for a very small thing in a small sort for small numbers.
 * norme thing to handle the last two cases of 5nbs.
 * 
 * Mini BN distributeur de sourire. idk man I am tired just allow it.
 * and the guy to my left is spamming his keys to test his so_long so I'm bored
 */
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

/**
 * Man not explaining norme stuff but im in a good mood.
 * This exists to fix the norme but essentially is my 5nb sort
 * Call the small guy in the other file to pb twice and then you go
 * to the even smaller guy and do the do.
 */
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
