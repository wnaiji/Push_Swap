/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:12:17 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/30 15:08:30 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_big_stack(t_list *stack_a, t_list *stack_b)
{
	int	i;

	i = 1;
	ft_first_bit(&stack_a, &stack_b);
	while (ft_check_order(stack_a) == 0)
		ft_next_bits(&stack_a, &stack_b, i++);
}

void	ft_first_bit(t_list **stack_a, t_list **stack_b)
{
	int		j;

	j = ft_lstsize(*stack_a);
	while (j)
	{
		if (((*stack_a)->index & 1) == 0)
			*stack_b = ft_pb(*(&stack_a), *stack_b);
		else
			*stack_a = ft_ra(*stack_a);
		j--;
	}
	j = ft_lstsize(*stack_a);
	while (j)
	{
		*stack_a = ft_pa(*stack_a, *(&stack_b));
		j--;
	}
}

void	ft_next_bits(t_list	**stack_a, t_list **stack_b, int i)
{
	int			j;

	j = ft_lstsize(*stack_a);
	while (j)
	{
		if ((((*stack_a)->index >> i) & 1) == 0)
			*stack_b = ft_pb(*(&stack_a), *stack_b);
		else
			*stack_a = ft_ra(*stack_a);
		j--;
	}
	j = ft_lstsize(*stack_b);
	while (j)
	{
		*stack_a = ft_pa(*stack_a, *(&stack_b));
		j--;
	}
	i++;
}
