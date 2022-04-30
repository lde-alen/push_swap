/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:14:47 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/30 02:38:41 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*ft_add_new(int nb, t_ps *ps)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nb;
	ps->h_a = new;
	ps->t_a = new;
	new->next = ps->h_a;
	new->prev = ps->t_a;
	return (new);
}

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
	return (node);
}

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

void	ft_print_list(t_node *list)
{
	t_node	*tmp;

	ft_printf("\nPrinting list with next\n");
	tmp = list;
	ft_printf("nb = %d\n", list->nb);
	list = list->next;
	while (list != tmp)
	{
		ft_printf("nb = %d\n", list->nb);
		list = list->next;
	}
	list = list->prev;
	// ft_printf("nb current = %d\n", list->nb);
	ft_printf("\nPrinting list with prev\n");
	// ft_printf("nb = %d\n", list->nb);
	while (list != tmp)
	{
		ft_printf("nb = %d\n", list->nb);
		list = list->prev;
	}
	// ft_printf("nb current = %d\n", list->nb);
	ft_printf("nb = %d\n", list->nb);
}

void	delete_node(t_node *src)
{
	if (src == src->next)
		src = NULL;
	else
	{
		src->prev->next = src->next;
		src->next->prev = src->prev;
		src = src->next;
	}
}
