/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:44:44 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/19 21:10:52 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(t_ps *ps, int ac, char **av)
{
	ps = (t_ps *)malloc(sizeof(t_ps));
	ps->ac = ac;
	ps->av = av;
	ps->s_a = NULL;
	ps->s_b = NULL;
	ps->h_a = &(ps->s_a);
	ps->h_b = &(ps->s_b);
}
