/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:42 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/22 13:34:10 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_fputchar(char c)
{
	write(2, &c, 1);
}

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
