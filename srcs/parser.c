/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:36 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/21 21:35:52 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_tab_to_str(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	str = "";
	while (i < ac)
	{
		if (av[1][0] == '\0')
			ft_fputstr("Error.\n");
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

/*
	set of numbers, or string of numbers,
	12 432 54 54 6 "12 77 45 76 8 96" 79 67 3467
*/
int	ft_parser(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ps->param[i])
	{
		if (ps->s_a->next == NULL && ps->s_a->prev == NULL)
		{
			ps->s_a->nb = ft_atoi(ps->param[i]);
			ps->s_a->prev = ps->s_a;
			ps->s_a->next = ps->h_a;
			j++;
			i++;
		}
		else
		{
			ps->s_a->next = ft_add_last(ft_atoi(ps->param[i]), ps);
			ps->s_a = ps->s_a->next;
			j++;
			i++;
		}
	}
	ps->s_a = ps->s_a->next;
	return (0);
}
	// ft_print_list(ps->h_a);
