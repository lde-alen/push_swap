/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/09 00:57:55 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_neg(t_ps *ps)
{
	int	k;

	k = 1;
	ps->s_a = ps->h_a;
	while (k <= ps->nb_numbers)
	{
		if ((ps->s_a->nb >> 31) & 1)
		{
			pb(ps);
			ps->j++;
		}
		else
		{
			ra(ps);
		}
		k++;
	}
	if (ps->s_b != NULL)
	{
		k = 0;
		while (k < ps->j)
		{
			pa(ps);
			k++;
		}
	}

}

void	ft_sort_pos(t_ps *ps)
{
	int	k;

	k = 1;
	ps->s_a = ps->h_a;
	while (k <= ps->nb_numbers)
	{
		if ((ps->s_a->nb >> ps->i) & 1)
		{
			pb(ps);
			rb(ps);
			ps->j++;
		}
		else
			ra(ps);
		k++;
	}
	if (ps->s_b != NULL)
	{
		k = 0;
		while (k < ps->j)
		{
			pa(ps);
			ra(ps);
			k++;
		}
	}
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
		ps->j = 0;
		ft_sort_pos(ps);
		ps->i++;
	}
	ps->j = 0;
	ft_sort_neg(ps);
}

t_bool	ft_is_sorted(t_ps *ps)
{
	while (ps->s_a->next != ps->h_a)
	{
		if (ps->s_a->nb > ps->s_a->next->nb && !ps->s_b)
		{
			// ft_printf("Stack not sorted\n");
			return (false);
		}
		ps->s_a = ps->s_a->next;
	}
	ps->s_a = ps->s_a->next;
	// ft_printf("Stack is sorted\n");
	return (true);
}

int	push_swap(int ac, char **av)
{
	t_ps	*ps;

	ft_check_errors(ac, av);
	ps = ft_init(ac, av);
	ft_parser(ps);
	ft_dup_check(ps);
	if (ft_is_sorted(ps) == false)
		ft_sort(ps);
	else
		return (0);
	// ft_printf("\nStack A:\n");
	// ft_print_list(ps->h_a);
	// ft_printf("\nStack B:\n");
	// ft_print_list(ps->h_b);
	return (0);
}
