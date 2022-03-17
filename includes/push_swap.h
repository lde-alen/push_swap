/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:39:43 by lde-alen          #+#    #+#             */
/*   Updated: 2022/03/17 17:19:49 by lde-alen         ###   ########.fr       */
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
	t_stack	stack_a;
	t_stack	*head_a;
	t_stack	stack_b;
	t_stack	*head_b;
}	t_ps;
#endif
