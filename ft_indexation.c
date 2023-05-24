/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:12:58 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 10:09:16 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_indexation(t_list *stack_a)
{
	int		i;
	int		index;
	t_list	*tmp;

	index = 0;
	tmp = stack_a;
	i = ft_isminim(stack_a);
	stack_a = ft_position_index(stack_a, index, i);
	while (tmp->next)
	{
		index++;
		i = ft_next_minimum(stack_a, i);
		stack_a = ft_position_index(stack_a, index, i);
		tmp = tmp->next;
	}
	return (stack_a);
}

int	ft_next_minimum(t_list *stack, int minim)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		index;

	tmp = stack;
	tmp2 = stack;
	index = ft_ismax(stack);
	while (tmp2)
	{
		while (tmp)
		{
			if (index > tmp->content && minim < tmp->content)
				index = tmp->content;
			tmp = tmp->next;
		printf("%d\n", index);
		}
		tmp2 = tmp2->next;
	}
		printf("je suis ici\n");
	return (index);
}

int	ft_ismax(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		index;

	tmp = stack;
	tmp2 = stack;
	index = stack->content;
	while (tmp2)
	{
		while (tmp)
		{
			if (index < tmp->content)
				index = tmp->content;
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
	return (index);
}

void	*ft_position_index(t_list *stack, int index, int i)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (i == tmp->content)
		{
			tmp->index = index;
			break ;
		}
		tmp = tmp->next;
	}
	return (stack);
}
