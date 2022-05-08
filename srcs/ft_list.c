/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:14:47 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/09 00:51:53 by lde-alen         ###   ########.fr       */
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
	ps->nb_numbers = 1;
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
	ps->nb_numbers++;
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

	if (!list)
	{
		ft_putstr("list is null\n");
		return ;
	}
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
	// ft_printf("\nPrinting list with prev\n");
	// while (list != tmp)
	// {
	// 	ft_printf("nb = %d\n", list->nb);
	// 	list = list->prev;
	// }
	// ft_printf("nb = %d\n", list->nb);
}

