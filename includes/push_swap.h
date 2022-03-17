/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:39:43 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/17 19:43:58 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				nb;
	struct t_stack	*prev;
	struct t_stack	*next;
}	t_stack;

typedef struct s_ps
{
	int		ac;
	int		av;
	t_stack	s_a;
	t_stack	*h_a;
	t_stack	s_b;
	t_stack	*h_b;
}	t_ps;

void	ft_init(t_ps *ps, int ac, char **av);
int		push_swap(int ac, char **av);
#endif
