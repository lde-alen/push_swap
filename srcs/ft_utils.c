/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:13:34 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:40:58 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Swimming all over again huh?
 */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * Unsigned ints are also allowed to swim..hmph..
 */
void	ft_swap_u(unsigned int *a, unsigned int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
