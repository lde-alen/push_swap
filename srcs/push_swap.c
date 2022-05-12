/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/13 00:24:38 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	ft_r4d1x(t_ps *ps)
{
	int	k;

	k = 1;
	ps->s_a = ps->h_a;
	while (k <= ps->nb_numbers)
	{
		if (((ps->s_a->index >> ps->i) & 1) == 1)
			ra(ps);
		else
			pb(ps);
		k++;
	}
	while (ps->s_b != NULL)
		pa(ps);
}

/*
	You need to loop on each element from the args that
	are in your l_a list and look if the save->i bit of your 
	bitshifted number has the same weight. If it has the number
	will be placed in the l_b list. Like so, you will sort par
	each weight of bits.
*/
void	ft_sort(t_ps *ps)
{
	ps->i = 0;
	while (ps->i < 31)
	{
		if (ft_is_sorted(ps) == true)
			return ;
		ft_r4d1x(ps);
		ps->i++;
	}
}

t_bool	ft_is_sorted(t_ps *ps)
{
	while (ps->s_a->next != ps->h_a)
	{
		if (ps->s_a->nb > ps->s_a->next->nb && !ps->s_b)
			return (false);
		ps->s_a = ps->s_a->next;
	}
	ps->s_a = ps->s_a->next;
	return (true);
}

t_bool	ft_is_sorted2(t_node *list)
{
	t_node	*tmp;

	tmp = list;
	while (list->next != tmp)
	{
		if (list->nb > list->next->nb)
			return (false);
		list = list->next;
	}
	list = list->next;
	return (true);
}

void ft_soap(t_ps *ps)
{
	t_node	*tmp;

	tmp = ps->sorted;
	while (ps->sorted->next != tmp)
	{
		if (ps->sorted->nb > ps->sorted->next->nb)
		{
			ft_swap(&ps->sorted->nb, &ps->sorted->next->nb);
			ps->sorted = ps->sorted->next;
		}
		ps->sorted = ps->sorted->next;
	}
	ps->sorted = ps->sorted->next;
	if (ft_is_sorted2(ps->sorted) == false)
		ft_soap(ps);
}

static void	ft_assign_index(t_ps *ps)
{
	t_node			*tmp;
	unsigned int	i;

	i = -1;
	tmp = ps->sorted;
	while (ps->sorted->next != tmp)
	{
		while (ps->s_a->nb != ps->sorted->nb)
			ps->s_a = ps->s_a->next;
		ps->s_a->index = ++i;
		ps->sorted = ps->sorted->next;
	}
	while (ps->s_a->nb != ps->sorted->nb)
			ps->s_a = ps->s_a->next;
	ps->s_a->index = ++i;
	ps->s_a = ps->h_a;
	ps->sorted = tmp;
}

int	push_swap(int ac, char **av)
{
	t_ps	*ps;

	ft_check_errors(ac, av);
	ps = ft_init(ac, av);
	ft_parser(ps);
	ft_dup_check(ps);
	ft_dup_list(ps);
	ft_soap(ps);
	ft_assign_index(ps);
	if (ft_is_sorted(ps) == false)
		ft_sort(ps);
	// ft_america(ps);
	// ft_printf("\nStack A:\n");
	// ft_print_list(ps->h_a);
	// ft_printf("\nStack B:\n");
	// ft_print_list(ps->h_b);
	return (0);
}
