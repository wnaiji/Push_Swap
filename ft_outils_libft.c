/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils_libft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:20:41 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/20 10:54:13 by wnaiji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long long int	result;
	int						sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	ft_chek_value_max(result, sign);
	return (result = result * sign);
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-') || (c == '+'))
		return (c);
	else
		return (0);
}

size_t	ft_strlen(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
}

void	ft_check_value(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 11)
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}
