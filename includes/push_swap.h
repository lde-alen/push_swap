/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:39:43 by lde-alen          #+#    #+#             */
/*   Updated: 2022/05/15 02:37:37 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_libft/libft.h"

typedef struct s_node
{
	int				nb;
	unsigned int	index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_ps
{
	int		ac;
	char	**av;
	char	*arg;
	char	**param;
	int		nb_numbers;
	int		index_a;
	int		index_b;
	int		i;
	int		j;
	t_node	*s_a;
	t_node	*h_a;
	t_node	*t_a;
	t_node	*s_b;
	t_node	*h_b;
	t_node	*t_b;
	t_node	*sorted;
}	t_ps;

typedef enum e_boolean
{
	false,
	true
}	t_bool;

void	ft_fputchar(char c);
void	ft_fputstr(char *str);
void	sa(t_ps *ps);
void	ra(t_ps *ps);
void	pa(t_ps *ps);
void	rra(t_ps *ps);
void	sb(t_ps *ps);
void	rb(t_ps *ps);
void	pb(t_ps *ps);
void	rrb(t_ps *ps);
void	ss(t_ps *ps);
void	rr(t_ps *ps);
void	rrr(t_ps *ps);

void	ft_combo_large(t_ps *ps);
void	ft_swap_u(unsigned int *a, unsigned int *b);
void	ft_micro(t_ps *ps);
void	ft_small(t_ps *ps);
void	ft_first_node_a(t_ps *ps, t_node *tmp);
void	ft_first_node_b(t_ps *ps, t_node *tmp);
void	ft_last_node_b(t_ps *ps, t_node *tmp);
void	ft_last_node_a(t_ps *ps, t_node *tmp);
void	ft_america(t_ps *ps);
void	ft_assign_index(t_ps *ps);
void	ft_dup_list(t_ps *ps);
void	ft_sort(t_ps *ps);
void	ft_sort_neg(t_ps *ps);
void	ft_sort_pos(t_ps *ps);
void	ft_add_a(t_ps *ps);
void	ft_add_b(t_ps *ps);
void	ft_init_b(t_ps *ps);
void	ft_init_a(t_ps *ps);
void	ft_check_errors(int ac, char **av);
void	ft_print_list(t_node *list);
void	ft_dup_check(t_ps *ps);
void	ft_swap(int *a, int *b);
char	*ft_tab_to_str(int ac, char **av);
int		push_swap(int ac, char **av);
int		ft_parser(t_ps *ps);
int		ft_check(t_ps *ps);
void	ft_minimini(t_ps *ps);
t_bool	ft_is_sorted(t_ps *ps);
t_bool	ft_is_sorted2(t_node *list);
t_node	*ft_add_new(int nb, t_ps *ps);
t_node	*ft_add_node(int nb, t_ps *ps);
t_node	*ft_init_list(void);
t_ps	*ft_init(int ac, char **av);
t_node	*ft_add_last(int nb, t_ps *ps);
#endif
