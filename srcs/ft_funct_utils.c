/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:28:45 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 17:12:32 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Check if it is the first node in a, honestly im bored for this file
 * 100101010100101010101001010101010101010101010101010 take this.
 * 
 * Note: Norme one day norme everyday.
 * but for real this entire file could have been done better by not passing
 * the entire structure and just making everything take just the lists needed
 * etc. zZzZ.
 */
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

/**
 * Try to use this one as an exercise and figure it out.
 * If you truly admit defeat cause noobism please refere to the same function
 * for the last_node_a
 * 
 * pssst..... still a norme thing bro please stop I am shy.
 */
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

/**
 * Yup still a norm ting but really it just checks if what I am pushing
 * is the first node in b.
 */
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

/**
 * It's a norm ting eh? jklollmaorofl
 * checks if is the last existing node in stack A when it is being pushed.
 * 
 * Note: RTFM bro read a bit and try to understand too hmph.
 */
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

/**
 * For things slightly biger than micro but still very petite.
 * Yeah.. I know.. we don't talk about this one... I am truly
 * not proud... It is hard coded shush.. could have been much better
 * but for some reason I couldn't be asked and surprisingly hardcoded things
 * lately have been more efficient if you want to know why well figure it out
 * and do your researches and you will see >.> ..
 */
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
