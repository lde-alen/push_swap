/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:36 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/16 11:19:17 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * This is the coffee maker. Does the tineaz bitty end of the parsing but this
 * allows me to convert a 2D array into a single array separated by a space
 * int order for me to be able to parse everythig and setup the nodes.
 * 
 * Note: I told you... bring the bring and do the do man c'mon..
 */
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

/**
 * This function assumes perfect input. It takes the atoi of the parameter
 * and adds it to a node creating a doubly circular linked list with each
 * number in a node. The first condition is there in case the list is
 * completely empty and it also does the initial linkage to the node
 * that setups the rest of the list.
 * 
 * Note: Could have been done differently but it is not too bad. If you want more
 * description go do your own reasearches. :)
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
