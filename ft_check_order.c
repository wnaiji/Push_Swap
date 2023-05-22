/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:09:52 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/22 16:25:40 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_order(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_isminim(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		index;
	int		i;

	tmp = stack;
	tmp2 = stack;
	index = stack->content;
	i = 0;
	while (tmp2->next)
	{
		while (tmp->next)
		{
			if (index > tmp->content)
				index = tmp->content;
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
	return (index);
}

int	ft_position_minim(t_list *stack)
{
	int		i;
	int		index;
	t_list	*tmp;

	i = 0;
	tmp = stack;
	index = ft_isminim(stack);
	while (tmp->next)
	{
		if (index == tmp->content)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
