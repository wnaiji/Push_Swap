/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:12:17 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/30 10:59:40 by wnaiji           ###   ########.fr       */
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
	t_list	*tmp;

	tmp = *stack_a;
	j = ft_lstsize(*stack_a);
	while (j)
	{
		if (((*stack_a)->index & 1) == 0)
			*stack_b = ft_pb(*(&stack_a), *stack_b);
		else
			*stack_a = ft_ra(*stack_a);
		tmp = tmp->next;
		j--;
	}
	tmp = *stack_b;
	while (tmp)
	{
		*stack_a = ft_pa(*stack_a, *(&stack_b));
		tmp = tmp->next;
	}
}

void	ft_next_bits(t_list	**stack_a, t_list **stack_b, int i)
{
	int			j;
	t_list		*tmp;

	j = ft_lstsize(*stack_a);
	tmp = *stack_a;
	while (j)
	{
		if ((((*stack_a)->index >> i) & 1) == 0)
			*stack_b = ft_pb(*(&stack_a), *stack_b);
		else
			*stack_a = ft_ra(*stack_a);
		tmp = tmp->next;
		j--;
	}
	tmp = *stack_b;
	while (tmp)
	{
		*stack_a = ft_pa(*stack_a, *(&stack_b));
		tmp = tmp->next;
	}
	i++;
}
