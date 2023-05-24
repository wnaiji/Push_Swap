/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:24:22 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 11:25:52 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_rra(t_list *stack_a)
{
	if (!stack_a || stack_a->next == NULL)
		return (stack_a);
	stack_a = ft_add_front_list(stack_a, ft_last_content(stack_a), ft_last_index(stack_a));
	stack_a = ft_delete_at_back(stack_a);
	ft_putstr("rra\n");
	return (stack_a);
}

t_list	*ft_rrb(t_list *stack_b)
{
	if (!stack_b || stack_b->next == NULL)
		return (stack_b);
	stack_b = ft_add_front_list(stack_b, ft_last_content(stack_b), ft_last_index(stack_b));
	stack_b = ft_delete_at_back(stack_b);
	ft_putstr("rrb\n");
	return (stack_b);
}

t_list	*ft_rrr(t_list *stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	if (!stack_a || !(*stack_b) || stack_a->next == NULL || tmp->next == NULL)
		return (stack_a);
	stack_a = ft_add_front_list(stack_a, ft_last_content(stack_a), ft_last_index(stack_a));
	stack_a = ft_delete_at_back(stack_a);
	*stack_b = ft_add_front_list(*stack_b, ft_last_content(*stack_b), ft_last_index(*stack_b));
	*stack_b = ft_delete_at_back(*stack_b);
	ft_putstr("rrr\n");
	return (stack_a);
}
