#include "push_swap.h"

void	ft_print_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	if (!list)
		return ;
	//while (tmp->next)
	while(tmp)
	{
		printf("--->%d<---\n", tmp->index);
		tmp = tmp->next;
	}
}

/*int	main(void)
{
	t_list	*test;

	test = NULL;
	t_list	*test2;

	test2 = NULL;

	test = ft_add_front_list(test, 10);
	//test2 = ft_add_front_list(test2, 100);

	ft_add_back_list(test, 20);
	//ft_add_back_list(test2, 200);
	ft_add_back_list(test, 30);
	//ft_add_back_list(test2, 300);

	printf("stack_a\n");
	ft_print_list(test);

	//printf("stack_b\n");
	//ft_print_list(test2);

	ft_ss(test, test2);
	test = ft_sa(test);
	test2 = ft_sb(test2);
	printf("Nouvelle stack:\n");
	test = ft_rrr(test, &test2);
	printf("stack_a\n");
	ft_print_list(test);

	printf("stack_b\n");
	ft_print_list(test2);
	system("leaks a.out");
	return (0);
}*/

int	main(int argc, char **argv)
{
	int	i;
	t_list	*stack_a;
	t_list	*stack_b;

	i = argc - 1;
	stack_a = NULL;
	stack_b = NULL;
	//init stack_a:
	if (argc > 1)
	{
		while(i)
		{
			stack_a = ft_pars_without_quote(stack_a, argv[i]);
			i--;
		}
	}
	stack_a = ft_indexation(stack_a);
	ft_what_size(&stack_a);
	ft_print_list(stack_a);
	system("leaks a.out");
	return (0);
}
