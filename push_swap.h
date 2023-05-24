/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walidnaiji <walidnaiji@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:02 by wnaiji            #+#    #+#             */
/*   Updated: 2023/05/23 20:59:41 by walidnaiji       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct	s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}				t_list;

//ajout ou sup d'un maillon:
//ft_list.c
void	*ft_add_front_list(t_list *list, int val);
void	*ft_add_back_list(t_list *list, int val);
void	*ft_delete_in_head(t_list *list);
void	*ft_delete_at_back(t_list *list);
int	ft_last_content(t_list *list);

//Mouvement possible:
//ft_swap.c
void	*ft_sa(t_list *stack_a);
void	*ft_sb(t_list *stack_b);
t_list	*ft_ss(t_list *stack_a, t_list *stack_b);
//ft_push.c
void	*ft_pa(t_list *stack_a, t_list **stack_b);
void	*ft_pb(t_list **stack_a, t_list *stack_b);
//ft_rotate.c
t_list	*ft_ra(t_list *stack_a);
t_list	*ft_rb(t_list *stack_b);
t_list	*ft_rr(t_list *stack_a, t_list **stack_b);
//ft_reverse_rotate.c
t_list	*ft_rra(t_list *stack_a);
t_list	*ft_rrb(t_list *stack_b);
t_list	*ft_rrr(t_list *stack_a, t_list **stack_b);

//fontion de la libft:
//ft_putstr.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_chek_value_max(unsigned long long nbr, int sign);
int	ft_lstsize(t_list *lst);
//ft_split.c
char	**ft_split(const char *s, const char c);
//outils_libft.c
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
size_t	ft_strlen(char **str);
void	ft_free(char **split);
void	ft_check_value(char *str);

//parsing:
//ft_parsing.c
t_list	*ft_pars_without_quote(t_list	*stack_a, char *arg);
void	*ft_pars_stack_a(t_list *stack_a);
t_list	*ft_pars_with_quote(t_list *stack_a, char *arg);
void	ft_error_cases(char *arg);
char	**ft_rev_split(char **arg);

//algo de check et de trie de 2 a 5:
//ft_check_order.c
int	ft_check_order(t_list *stack);
int	ft_isminim(t_list *stack);
int	ft_position_minim(t_list *stack);
//ft_cases_2_to_5.c
void	ft_cases_2(t_list *stack, int index);
void	ft_cases_4(t_list **stack_a, t_list **stack_b);
void	ft_cases_5(t_list **stack_a, t_list *stack_b);
//ft_cases_3.c
void	ft_cases_3(t_list **stack_a);
int	ft_cases_3_check(t_list *stack_a);
void	ft_cases_3_reverse(t_list **stack_b);
int	ft_cases_3_check_reverse(t_list *stack_a);

//indexation de la stack A
//ft_indexation.c
void	*ft_indexation(t_list *stack_a);
int	ft_next_minimum(t_list *stack, int minim);
void	*ft_position_index(t_list *stack, int index, int i);

//algo de trie:
//ft_what_size.c
void	ft_what_size(t_list **stack_a);

// print a sup:--------
void	ft_print_list(t_list *list);

#endif
