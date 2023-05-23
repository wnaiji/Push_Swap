/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:20:30 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/23 14:39:07 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_add_front_list(t_list *list, int val)
{
	t_list	*newcontent;

	newcontent = malloc(sizeof(t_list));
	newcontent->content = val;
	newcontent->next = list;
	return (newcontent);
}

void	*ft_add_back_list(t_list *list, int val)
{
	t_list	*newcontent;
	t_list	*tmp;

	tmp = list;
	newcontent = malloc(sizeof(t_list));
	newcontent->content = val;
	newcontent->next = NULL;
	if (!list)
		return (newcontent);
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newcontent;
		return (list);
	}
}

void	*ft_delete_in_head(t_list *list)
{
	t_list	*nxt;

	if (!list)
		return (NULL);
	nxt = list->next;
	free(list);
	return (nxt);
}

void	*ft_delete_at_back(t_list *list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = list;
	tmp2 = list;
	if (!list)
		return (list);
	if (list->next == NULL)
	{
		free(list);
		return (list);
	}
	while (tmp->next)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp2->next = NULL;
	free(tmp);
	return (list);
}

int	ft_last_content(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	if (!list)
		return (0);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->content);
}
