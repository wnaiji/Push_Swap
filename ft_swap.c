/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:22:59 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/19 15:47:01 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_sa(t_list *stack_a)
{
	int	tmp;

	tmp = stack_a->content;
	if (!stack_a || stack_a->next == NULL)
		return (stack_a);
	stack_a->content = stack_a->next->content;
	stack_a->next->content = tmp;
	ft_putstr("sa\n");
	return (stack_a);
}

void	*ft_sb(t_list *stack_b)
{
	int	tmp;

	tmp = stack_b->content;
	if (!stack_b || stack_b->next == NULL)
		return (stack_b);
	stack_b->content = stack_b->next->content;
	stack_b->next->content = tmp;
	ft_putstr("sb\n");
	return (stack_b);
}

t_list	*ft_ss(t_list *stack_a, t_list *stack_b)
{
	int	tmp;

	tmp = stack_a->content;
	if ((!stack_a || !stack_b)
		|| (stack_a->next == NULL) || (stack_b->next == NULL))
		return (stack_a);
	stack_a->content = stack_a->next->content;
	stack_a->next->content = tmp;
	tmp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = tmp;
	ft_putstr("ss\n");
	return (stack_a);
}
