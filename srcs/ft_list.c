/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:14:47 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/29 01:05:55 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*ft_add_last(int nb, t_ps *ps)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->index = ps->s_a->index + 1;
	new->nb = nb;
	new->next = ps->h_a;
	new->prev = ps->s_a;
	return (new);
}

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

void	ft_print_list(t_node *list)
{
	t_node	*tmp;

	ft_printf("\nPrinting list with next\n");
	tmp = list;
	ft_printf("nb = %d\n", list->nb);
	ft_printf("index = %d\n", list->index);
	list = list->next;
	while (list != tmp)
	{
		ft_printf("nb = %d\n", list->nb);
		ft_printf("index = %d\n", list->index);
		list = list->next;
	}
	// ft_printf("nb current = %d\n", list->nb);
	ft_printf("\nPrinting list with prev\n");
	ft_printf("nb = %d\n", list->nb);
	ft_printf("index = %d\n", list->index);
	list = list->prev;
	while (list != tmp)
	{
		ft_printf("nb = %d\n", list->nb);
		ft_printf("index = %d\n", list->index);
		list = list->prev;
	}
	// ft_printf("nb current = %d\n", list->nb);
}
