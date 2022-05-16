/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:18:07 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * H4CK3R function.
 * JK this is essentially the radix algo, it loops through the 32 bits of INT
 * and pushes to the stack b the numbers for which the respective bit is 0
 * else rotate the stack a and repeat the process.
 *
 * Note: This was fun and my goal for the project was to learn bitwise opp
 * bit shift and manipulating linked lists. Definetely see how this could have
 * been done in recursive. This algo is fun and cool on the visualizer and
 * very efficient for combo large numbers but for defaults one it is eh.
 * (But cool so style points)
 */
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

/**
 * This Function essentially sorts 3 numbers.
 * Saddly it is hard coded but it is also the most efficient
 * way to do it. 
 * 
 * *dies inside*
 * 
 * Note: BLURGH
 */
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

/**
 * This is the brain of the sort. Checks the amount of
 * numbers entered as param and then forwards to the proper
 * function. In case of >5 numbers starts looping through the bits
 * and calling the H4CK3R KOPOW function.
 * 
 * Note: You're kewl? I'm kewl? You kewl? I'm kewl.
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

/**
 *  In order to perform RADOXSON I needed to have a sorted
 * array so I could deal with the indexes so I can radox the
 * indexes and never see negatives in my life. 
 * Why soap? Because I make recursive bubblies with it. >.>
 * 
 * Note: Find indexes in your own life and dont ever deal with
 * negativity anymore. STAH
 */
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

/**
 * Do the do and bring the bring function,
 * I bring the bring and do the do so how are you?
 * 
 * Note: idk you tell me.
 */
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
