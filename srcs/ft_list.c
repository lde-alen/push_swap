/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:14:47 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/19 23:58:10 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*ft_init_list(void)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!(new))
		return (NULL);
	new->index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	ft_print_list(t_node *lst, t_ps *ps)
{
	while (lst->next)
	{
		ft_printf("index =%d\n", lst->index);
		ft_printf("nb =%d\n", lst->nb);
		lst = lst->next;
		if (lst == *ps->h_a)
			break ;
	}
}

/*
	PS IS ALWAYS THE LAST ELEMENT PLEASE CARE !!!!!!!
	AKA THIS IS A LIST ADD LAST;
	NOTE: MAKE A PROPER ADD FUNCTION AND MODIFY
*/
int	ft_new_node(int nb, t_ps *ps)
{
	t_node	*new;
	void	*tmp;

	new = (t_node *)malloc(sizeof(t_node));
	if (ps->s_a->next == NULL && ps->s_a->prev == NULL)
	{
		new->index = 1;
		ps->s_a->prev = new;
		new->prev = *ps->h_a;
	}
	else
	{
		new->index = ps->s_a->prev->index + 1;
		tmp = ps->s_a;
		new->prev = tmp;
	}
	ps->s_a->nb = nb;
	ps->s_a->next = new;
	new->next = *ps->h_a;
	return (0);
}
