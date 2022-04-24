/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:42:58 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/24 15:07:47 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_swap(int ac, char **av)
{
	t_ps	*ps;

	ft_check_errors(ac, av);
	ps = ft_init(ac, av);
	ft_parser(ps);
	ft_dup_check(ps);
	return (0);
}
