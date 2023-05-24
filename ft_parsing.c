/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:20:19 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/24 20:21:22 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_pars_without_quote(t_list *stack_a, char *arg)
{
	int		i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == ' ')
		{
			stack_a = ft_pars_with_quote(stack_a, arg);
			return (stack_a);
		}
		i++;
	}
	ft_error_cases(arg);
	i = ft_atoi(arg);
	stack_a = ft_add_front_list(stack_a, i, 0);
	ft_pars_stack_a(stack_a);
	return (stack_a);
}

t_list	*ft_pars_with_quote(t_list *stack_a, char *arg)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	split = ft_split(arg, ' ');
	split = ft_rev_split(split);
	while (split[i])
	{
		ft_error_cases(split[i]);
		j = ft_atoi(split[i]);
		stack_a = ft_add_front_list(stack_a, j, 0);
		i++;
	}
	ft_free(split);
	free(split);
	ft_pars_stack_a(stack_a);
	return (stack_a);
}

void	*ft_pars_stack_a(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = stack_a;
	tmp2 = stack_a;
	if (!stack_a)
		return (stack_a);
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp2->content == tmp->content)
			{
				ft_putstr("Error\n");
				exit(EXIT_FAILURE);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (stack_a);
}

void	ft_error_cases(char *arg)
{
	int	i;

	i = 0;
	ft_check_value(arg);
	while (arg[i])
	{
		if ((arg[0] == '-' && !arg[1]) || (arg[0] == '+' && !arg[1]))
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		if ((arg[i + 1] == '-') || (arg[i + 1] == '+'))
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		if (ft_isdigit(arg[i]) == 0)
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

char	**ft_rev_split(char **arg)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	str = NULL;
	len = ft_strlen(arg) - 1;
	while (i < len)
	{
		str = arg[i];
		arg[i] = arg[len];
		arg[len] = str;
		i++;
		len--;
	}
	return (arg);
}
