/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:20:56 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 16:11:37 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Sometimes in life you need freedom but not too much, so this is a mini
 * murica for you
 */
void	ft_mini_america(t_ps *ps)
{
	free (ps->arg);
	ft_free_arr(ps->param);
	free (ps);
	ft_fputstr("Error\n");
}

/**
 *  >.> .... figure it out...
 */
void	ft_free_arr(char **array)
{
	int	i;

	i = -1;
	if (!array)
		return ;
	while (array[++i])
		free (array[i]);
	free (array);
}

/**
 * C'mon we are over this... same way you maloc'ed it just do the same thing
 * with free.
 * 
 * Note: -.-
 */
void	ft_free_list(t_node *stack)
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

/**
 * My code needs freedom. Do not say thanks. It just comes and does it's thing.
 * If you are not happy.... STAH
 * 
 * Note: MURICA
 */
void	ft_america(t_ps *ps)
{
	ft_free_arr(ps->param);
	free (ps->arg);
	ft_free_list(ps->s_a);
	ft_free_list(ps->sorted);
	free (ps);
}
