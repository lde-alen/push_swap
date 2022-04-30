/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:44:44 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/30 18:05:24 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_init(int ac, char **av)
{
	t_ps	*ps;

	ps = (t_ps *)malloc(sizeof(t_ps));
	if (!(ps))
		return (NULL);
	ps->ac = ac;
	ps->av = av;
	ps->s_a = NULL;
	ps->s_b = NULL;
	ps->h_a = ps->s_a;
	ps->h_b = ps->s_b;
	ps->t_a = NULL;
	ps->t_b = NULL;
	ps->arg = ft_tab_to_str(ac, av);
	ps->param = ft_split(ps->arg, ' ');
	return (ps);
}

void	ft_init_b(t_ps *ps)
{
	t_node	*tmp;

	tmp = ps->s_a->next;
	ps->s_b = ps->s_a;
	ps->s_b->next = ps->s_b;
	ps->s_b->prev = ps->s_b;
	ps->t_b = ps->s_b;
	ps->h_b = ps->s_b;
	ps->h_a = tmp;
	ps->h_a->prev = ps->t_a;
	ps->t_a->next = ps->h_a;
}

void	ft_init_a(t_ps *ps)
{
	t_node	*tmp;

	tmp = ps->s_b->next;
	ps->s_a = ps->s_b;
	ps->s_a->next = ps->s_a;
	ps->s_a->prev = ps->s_a;
	ps->t_a = ps->s_a;
	ps->h_a = ps->s_a;
	ps->h_b = tmp;
	ps->h_b->prev = ps->t_b;
	ps->t_b->next = ps->h_b;
}
