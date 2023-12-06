/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:18:39 by tsadouk           #+#    #+#             */
/*   Updated: 2023/12/05 17:18:39 by tsadouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct	s_stack_node
{
	int				nbr;
	int				push_cost;
	int				index;
	bool			above_median;
	bool			cheapest;
	struct s_stack 	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack_node;

# endif