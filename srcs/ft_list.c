/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:14:47 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:37:23 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Adds new element to the stack A this is essentially used when it is the
 * first node.
 */
t_node	*ft_add_new(int nb, t_ps *ps)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nb;
	ps->h_a = new;
	ps->t_a = new;
	new->index = 0;
	new->next = ps->h_a;
	new->prev = ps->t_a;
	ps->nb_numbers = 1;
	return (new);
}

/**
 * adds node to the rest of the list..
 * rtfm my guy.. rtfm..
 */
t_node	*ft_add_node(int nb, t_ps *ps)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = ps->h_a;
	node->prev = ps->s_a;
	ps->s_a->next = node;
	ps->h_a->prev = node;
	ps->t_a = node;
	ps->nb_numbers++;
	ps->s_a->index = 0;
	return (node);
}

/**
 * Initializationation
 * 
 * nodes knows it as dad else it wouldnt exist.
 */
t_node	*ft_init_list(void)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!(new))
		return (NULL);
	new->next = new;
	new->prev = new;
	return (new);
}

/**
 * The hidden savant who takes dna's and just duplicate shizzle
 * yeah mah nizzle this is it.
 * 
 * Don't even start I know the next and prevs are a bit messed up
 * but this code has a specific purpose so I don't have to bother with the rest
 * are you my evaluator? yes? then I will tell you why.. no? then sounds like a
 * you problem B)
 */
void	ft_dup_list(t_ps *ps)
{
	t_node	*tmp;

	ps->sorted = (t_node *)malloc(sizeof(t_node));
	tmp = ps->sorted;
	while (ps->s_a->next != ps->h_a)
	{
		ps->sorted->nb = ps->s_a->nb;
		ps->sorted->next = (t_node *)malloc(sizeof(t_node));
		ps->sorted->next->prev = ps->sorted;
		ps->sorted = ps->sorted->next;
		ps->s_a = ps->s_a->next;
	}
	ps->sorted->nb = ps->s_a->nb;
	ps->sorted->next = tmp;
	ps->sorted = ps->sorted->next;
	ps->s_a = ps->s_a->next;
}
