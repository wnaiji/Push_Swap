/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:23:17 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/23 14:38:39 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_pa(t_list *stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	if (!(*stack_b))
		return (stack_a);
	stack_a = ft_add_front_list(stack_a, tmp->content);
	*stack_b = ft_delete_in_head(*stack_b);
	ft_putstr("pa\n");
	return (stack_a);
}

void	*ft_pb(t_list **stack_a, t_list *stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (!(*stack_a))
		return (stack_b);
	stack_b = ft_add_front_list(stack_b, tmp->content);
	*stack_a = ft_delete_in_head(*stack_a);
	ft_putstr("pb\n");
	return (stack_b);
}
