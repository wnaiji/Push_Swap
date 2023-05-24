/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:12:58 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 08:57:52 by walidnaiji       ###   ########.fr       */
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
	printf("%d\n", i);
	while (tmp)
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
	index = stack->content;
		printf("je suis ici\n");
	while (tmp2)
	{
		tmp = stack;
		while (tmp)
		{
			if (index > tmp->content && minim > tmp->content)
				index = tmp->content;
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
		printf("%d\n", index);
	return (index);
}
/*{
	t_list	*tmp;
	int		index;

	tmp = stack;
	index = minim;
	while (tmp)
	{
		if (minim < tmp->content)
			index = tmp->content;
		if (minim < tmp->content && index > tmp->content)
		{
			index = tmp->content;
		}
		tmp = tmp->next;
	}
	return (index);
}*/

void	*ft_position_index(t_list *stack, int index, int i)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next)
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
