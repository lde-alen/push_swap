/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:20:56 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/14 17:58:04 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_free_arr(char **array)
{
	int	i;

	i = -1;
	if (!array)
		return ;
	while (array[++i])
		free (array[i]);
	free (array);
}

static void	ft_free_list(t_node *stack)
{
	t_node	*head;
	t_node	*tmp;

	head = stack;
	while (stack->next != head)
	{
		tmp = stack;
		stack = stack ->next;
		free(tmp);
	}
	free (stack);
}

void	ft_america(t_ps *ps)
{
	ft_free_arr(ps->param);
	free (ps->arg);
	ft_free_list(ps->s_a);
	ft_free_list(ps->sorted);
	free (ps);
}
