/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:44:44 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/17 18:50:12 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(t_ps *ps, int ac, char **av)
{
	ps->ac = ac;
	ps->av = av;
	ps->s_a.prev = NULL;
	ps->s_b.prev = NULL;
	ps->h_a = &(ps->s_a);
	ps->h_b = &(ps->s_b);
}
