/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_2_to_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:08:40 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/22 16:25:50 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cases_2(t_list *stack, int index)
{
	if (ft_check_order(stack) && index == 1)
		return ;
	else if (index == 1)
		stack = ft_sa(stack);
	else if ((index == 2) && stack->content < stack->next->content)
		stack = ft_sb(stack);
	return ;
}

void	ft_cases_4(t_list **stack_a, t_list **stack_b)
{
	while (ft_check_order(*stack_a) == 0)
	{
		printf("je suis la \n");
		if (ft_position_minim(*stack_a) == 1)
			ft_sa(*stack_a);
		else if (ft_position_minim(*stack_a) == 2)
		{
			*stack_a = ft_ra(*stack_a);
			ft_sa(*stack_a);
		}
		else if (ft_position_minim(*stack_a) == 3)
			*stack_a = ft_rra(*stack_a);
		*stack_b = ft_pb(*(&stack_a), *stack_b);
		if (ft_lstsize(*stack_b) == 2)
			ft_cases_2(*stack_b, 2);
		ft_cases_3(*(&stack_a));
		*stack_a = ft_pa(*stack_a, *(&stack_b));
		printf("je suis la \n");
		ft_print_list(*stack_a);
	}
}

void	ft_cases_5(t_list **stack_a, t_list *stack_b)
{
	while (ft_check_order(*stack_a) == 0)
	{
		if (ft_position_minim(*stack_a) == 1)
			ft_sa(*stack_a);
		else if (ft_position_minim(*stack_a) == 2)
		{
			*stack_a = ft_ra(*stack_a);
			*stack_a = ft_ra(*stack_a);
		}
		else if (ft_position_minim(*stack_a) == 3)
		{
			*stack_a = ft_rra(*stack_a);
			*stack_a = ft_rra(*stack_a);
		}
		else if (ft_position_minim(*stack_a) == 4)
			*stack_a = ft_rra(*stack_a);
		stack_b = ft_pb(*(&stack_a), stack_b);
		ft_cases_4(*(&stack_a), &stack_b);
		*stack_a = ft_pa(*stack_a, &stack_b);
	}
}
