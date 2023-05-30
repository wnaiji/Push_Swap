/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:07:39 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/30 15:09:49 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_print_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	if (!list)
		return ;
	//while (tmp->next)
	while(tmp)
	{
		printf("--->%d<---\n", tmp->content);
		tmp = tmp->next;
	}
}*/

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;

	i = argc - 1;
	stack_a = NULL;
	if (argc > 1)
	{
		while (i)
		{
			stack_a = ft_pars_without_quote(stack_a, argv[i]);
			i--;
		}
		stack_a = ft_indexation(stack_a);
		ft_what_size(&stack_a);
	}
	return (0);
}
