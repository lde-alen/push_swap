/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:13:34 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/01 15:19:22 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void delete_node(t_node *from)
{
    if (from == from->next) {
        from = NULL;
    } else {
        from->prev->next = from->next;
        from->next->prev = from->prev;
        from = from->next;
    }
}

void	push_to_other_list(t_node *from, t_node *to)
{
    t_node *save;
    t_node *stock;

    if (!from)
        return;
    save = from;
    delete_node(from);
	if (to)
	{
        stock = to->prev;
        to->prev = save;
        to->prev->next = to;
        to->prev->prev = stock;
        to->prev->prev->next = save;
        to = to->prev;
    } 
	else
	{
        to = save;
        to->next = to;
        to->prev = to;
    }
}
