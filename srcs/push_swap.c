/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/07 05:02:41 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_pos(t_ps *ps)
{

}

void	ft_sort(t_ps *ps)
{
	ps->i = 0;

	while (ps->i < 31)
	{
		ps->j = 0;
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
			ft_printf("Stack not sorted\n");
			return (false);
		}
		ps->s_a = ps->s_a->next;
	}
	ps->s_a = ps->s_a->next;
	ft_printf("Stack is sorted\n");
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
	ft_printf("\nStack A:\n");
	ft_print_list(ps->h_a);
	ft_printf("\nStack B:\n");
	ft_print_list(ps->h_b);
	return (0);
}
