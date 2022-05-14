/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/15 02:41:35 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	ft_micro(t_ps *ps)
{
	if (ps->s_a->nb > ps->s_a->next->nb && ps->s_a->nb > ps->s_a->next->next->nb
		&& ps->s_a->next->nb < ps->s_a->next->next->nb)
		ra(ps);
	else if (ps->s_a->nb > ps->s_a->next->nb
		&& ps->s_a->nb > ps->s_a->next->next->nb
		&& ps->s_a->next->nb > ps->s_a->next->next->nb)
	{
		sa(ps);
		rra(ps);
	}
	else if (ps->s_a->nb > ps->s_a->next->nb
		&& ps->s_a->nb < ps->s_a->next->next->nb)
		sa(ps);
	else if (ps->s_a->nb < ps->s_a->next->nb
		&& ps->s_a->nb < ps->s_a->next->next->nb
		&& ps->s_a->next->nb > ps->s_a->next->next->nb)
	{
		sa(ps);
		ra(ps);
	}
	else if (ps->s_a->nb < ps->s_a->next->nb
		&& ps->s_a->nb > ps->s_a->next->next->nb
		&& ps->s_a->next->nb > ps->s_a->next->next->nb)
		rra(ps);
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
	ps->s_a = ps->h_a;
	if (ps->nb_numbers == 2)
		sa(ps);
	else if (ps->nb_numbers == 3)
		ft_micro(ps);
	else if (ps->nb_numbers <= 5)
		ft_combo_large(ps);
	else
	{
		ps->i = -1;
		while (++(ps->i) < 31)
		{
			if (ft_is_sorted(ps) == true)
				return ;
			ft_r4d1x(ps);
		}
	}
}

void	ft_soap(t_ps *ps)
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

int	push_swap(int ac, char **av)
{
	t_ps	*ps;

	if (ac == 1)
		return (-1);
	ft_check_errors(ac, av);
	ps = ft_init(ac, av);
	ft_parser(ps);
	ft_dup_check(ps);
	ft_dup_list(ps);
	ft_soap(ps);
	ft_assign_index(ps);
	if (ft_is_sorted(ps) == false)
		ft_sort(ps);
	ft_america(ps);
	return (0);
}
