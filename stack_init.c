/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:09:14 by tsadouk           #+#    #+#             */
/*   Updated: 2024/01/10 05:02:36 by tsadouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long 	ft_atol(const char *s)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\v' || *s == '\f'
	|| *s == '\r')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s && ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}

static void append_node(t_stack_node **stack, int n) // Add a node to the stack
{
	t_stack_node *node;
	t_stack_node *last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->nbr = n;
	if (!*stack)
	{
		node->prev = NULL;
		*stack = node;
	}
	else
	{
		last_node = *stack;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_sytax(argv[i])) // Check if the string is a number
			free_errors(a);
		n = ft_atol(argv[i]); // Convert the string to a long
		if (n > INT_MAX || n < INT_MIN) // Check if the number is in the int range
			free_errors(a);
		if (error_duplicates(*a, (int)n)) // Check if the number is a duplicate)))
			free_errors(a);
		apped_node(a, (int)n); // Add the number to the stack
		i++;
	}
}