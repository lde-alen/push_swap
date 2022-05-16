/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:42 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:33:31 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * putchar in 10
 */
void	ft_fputchar(char c)
{
	write(2, &c, 1);
}

/**
 *  putstr with exit in 10
 *
 * note: yeah yeah we have putstr_fd just let me be this one exits...
 */
void	ft_fputstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_fputchar(str[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
