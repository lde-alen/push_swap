/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:36 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/15 01:34:31 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_tab_to_str(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = ft_strdup("");
	while (i < ac)
	{
		if ((av[1][0] == '\0' && ac == 2) || (av[1][0] == ' ' && ac == 2
		&& ft_strlen(av[1]) == 1))
			ft_fputstr("Error\n");
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
	int		i;
	t_node	*tmp;

	i = 0;
	while (ps->param[i])
	{
		if (ps->s_a == NULL)
			ps->s_a = ft_add_new(ft_atoi(ps->param[i]), ps);
		else
		{
			ps->s_a->next = ft_add_node(ft_atoi(ps->param[i]), ps);
			ps->s_a = ps->s_a->next;
			tmp = ps->s_a;
		}
		i++;
	}
	ps->s_a = ps->s_a->next;
	ps->s_a->prev = tmp;
	return (0);
}
