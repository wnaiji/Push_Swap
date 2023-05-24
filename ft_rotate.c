/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:23:46 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 20:33:40 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_ra(t_list *stack_a)
{
	if (!stack_a || stack_a->next == NULL)
		return (stack_a);
	ft_add_back_list(stack_a, stack_a->content, stack_a->index);
	stack_a = ft_delete_in_head(stack_a);
	ft_putstr("ra\n");
	return (stack_a);
}

t_list	*ft_rb(t_list *stack_b)
{
	if (!stack_b || stack_b->next == NULL)
		return (stack_b);
	ft_add_back_list(stack_b, stack_b->content, stack_b->index);
	stack_b = ft_delete_in_head(stack_b);
	ft_putstr("rb\n");
	return (stack_b);
}

t_list	*ft_rr(t_list *stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	if ((!stack_a || stack_a->next == NULL)
		|| (!(*stack_b) || tmp->next == NULL))
		return (stack_a);
	ft_add_back_list(stack_a, stack_a->content, stack_a->index);
	ft_add_back_list(*stack_b, tmp->content, (*stack_b)->index);
	stack_a = ft_delete_in_head(stack_a);
	*stack_b = ft_delete_in_head(*stack_b);
	ft_putstr("rr\n");
	return (stack_a);
}
