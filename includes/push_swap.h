/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:39:43 by lde-alen          #+#    #+#             */
/*   Updated: 2022/04/24 23:30:06 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_libft/libft.h"

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_ps
{
	int		ac;
	char	**av;
	char	*arg;
	char	**param;
	int		index_a;
	int		index_b;
	t_node	*s_a;
	t_node	*s_b;
	t_node	*h_a;
	t_node	*h_b;
}	t_ps;

void	ft_fputchar(char c);
void	ft_fputstr(char *str);
int		push_swap(int ac, char **av);
int		ft_parser(t_ps *ps);
int		ft_check(t_ps *ps);
t_node	*ft_init_list(void);
t_ps	*ft_init(int ac, char **av);
void	ft_check_errors(int ac, char **av);
t_node	*ft_add_last(int nb, t_ps *ps);
void	ft_print_list(t_node *list);
char	*ft_tab_to_str(int ac, char **av);
void	ft_dup_check(t_ps *ps);
#endif
