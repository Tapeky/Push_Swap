/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:18:39 by tsadouk           #+#    #+#             */
/*   Updated: 2024/01/10 06:00:15 by tsadouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "Libft/libft.h"

typedef struct	s_stack_node
{
	int				nbr;
	int				push_cost;
	int				index;
	bool			above_median;
	bool			cheapest;
	struct s_stack_node 	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;

t_stack_node	*find_max(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
int				stack_len(t_stack_node *stack);
void			sort_three(t_stack_node **a);
void	sort_stacks(t_stack_node **a, t_stack_node **b);
void	init_nodes_a(t_stack_node *a, t_stack_node *b);
void	current_index(t_stack_node *stack);
# endif