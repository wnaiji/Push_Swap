/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:22:59 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 20:33:30 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_sa(t_list *stack_a)
{
	int	tmp;

	if (!stack_a || stack_a->next == NULL)
		return (stack_a);
	tmp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = tmp;
	tmp = stack_a->index;
	stack_a->index = stack_a->next->index;
	stack_a->next->index = tmp;
	ft_putstr("sa\n");
	return (stack_a);
}

void	*ft_sb(t_list *stack_b)
{
	int	tmp;

	if (!stack_b || stack_b->next == NULL)
		return (stack_b);
	tmp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = tmp;
	tmp = stack_b->index;
	stack_b->index = stack_b->next->index;
	stack_b->next->index = tmp;
	ft_putstr("sb\n");
	return (stack_b);
}

t_list	*ft_ss(t_list *stack_a, t_list *stack_b)
{
	int	tmp;

	if ((!stack_a || !stack_b)
		|| (stack_a->next == NULL) || (stack_b->next == NULL))
		return (stack_a);
	tmp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = tmp;
	tmp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = tmp;
	tmp = stack_a->index;
	stack_a->index = stack_a->next->index;
	stack_a->next->index = tmp;
	tmp = stack_b->index;
	stack_b->index = stack_b->next->index;
	stack_b->next->index = tmp;
	ft_putstr("ss\n");
	return (stack_a);
}
