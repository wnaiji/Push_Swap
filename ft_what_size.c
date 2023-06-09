/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:50:22 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 16:08:31 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_what_size(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_check_order(*stack_a) == 1)
		return ;
	else if (ft_lstsize(*stack_a) == 2)
		ft_cases_2(*stack_a, 1);
	else if (ft_lstsize(*stack_a) == 3)
		ft_cases_3(*(&stack_a));
	else if (ft_lstsize(*stack_a) == 4)
		ft_cases_4(*(&stack_a), &stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		ft_cases_5(*(&stack_a), stack_b);
	else
		ft_sort_big_stack(*stack_a, stack_b);
}
