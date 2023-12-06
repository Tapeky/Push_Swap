/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:18:36 by tsadouk           #+#    #+#             */
/*   Updated: 2023/12/05 17:18:36 by tsadouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	t_stack_node *a;
	t_stack_node *b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2) // Case Management of ./push_swap "1 1"
		argv = split(argv[1], ' '); // Split the string in an array of string to manage the case

	return (0);
}