/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:22:16 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/20 17:12:38 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_chek_value_max(unsigned long long nbr, int sign)
{
	unsigned long long	int_min;
	unsigned long long	int_max;

	int_min = 2147483648;
	int_max = 2147483647;
	if (nbr > int_min && sign < 0)
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (nbr == int_min)
		return ;
	else if (nbr > INT_MAX)
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
