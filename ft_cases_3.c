/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:19:01 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/22 16:10:52 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cases_3_check(t_list *stack_a)
{
	int	i;
	int	j;
	int	k;

	i = stack_a->content;
	j = stack_a->next->content;
	k = stack_a->next->next->content;
	if (i > j && i > k && j > k)
		return (1);
	if (i < j && i > k)
		return (2);
	if (i > j && i < k)
		return (3);
	if (i > j && i > k && j < k)
		return (4);
	if (i < j && i < k && j > k)
		return (5);
	return (0);
}

void	ft_cases_3(t_list **stack_a)
{
	if (ft_check_order(*stack_a))
		return ;
	if (ft_cases_3_check(*stack_a) == 1)
	{
		*stack_a = ft_ra(*stack_a);
		ft_sa(*stack_a);
	}
	else if (ft_cases_3_check(*stack_a) == 2)
		*stack_a = ft_rra(*stack_a);
	else if (ft_cases_3_check(*stack_a) == 3)
		ft_sa(*stack_a);
	else if (ft_cases_3_check(*stack_a) == 4)
		*stack_a = ft_ra(*stack_a);
	else if (ft_cases_3_check(*stack_a) == 5)
	{
		*stack_a = ft_rra(*stack_a);
		ft_sa(*stack_a);
	}
}

int	ft_cases_3_check_reverse(t_list *stack_a)
{
	int	i;
	int	j;
	int	k;

	i = stack_a->content;
	j = stack_a->next->content;
	k = stack_a->next->next->content;
	if (i < j && i < k && j < k)
		return (1);
	if (i < j && i < k && j > k)
		return (2);
	if (i > j && i > k && i < k)
		return (3);
	if (i < j && i > k && j > k)
		return (4);
	if (i > j && i < k && j < k)
		return (5);
	return (0);
}

void	ft_cases_3_reverse(t_list **stack_b)
{
	if (ft_cases_3_check_reverse(*stack_b) == 1)
	{
		ft_sb(*stack_b);
		*stack_b = ft_rrb(*stack_b);
	}
	else if (ft_cases_3_check_reverse(*stack_b) == 2)
	{
		ft_sb(*stack_b);
		*stack_b = ft_rrb(*stack_b);
		ft_sb(*stack_b);
	}
	else if (ft_cases_3_check_reverse(*stack_b) == 3)
	{
		ft_sb(*stack_b);
		*stack_b = ft_rb(*stack_b);
	}
	else if (ft_cases_3_check_reverse(*stack_b) == 4)
		ft_sb(*stack_b);
	else if (ft_cases_3_check_reverse(*stack_b) == 5)
		*stack_b = ft_rrb(*stack_b);
	return ;
}
