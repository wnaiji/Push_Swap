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
		printf("--->%d<---\n", tmp->index);
		tmp = tmp->next;
	}
}*/


int	main(int argc, char **argv)
{
	int	i;
	t_list	*stack_a;

	i = argc - 1;
	stack_a = NULL;
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
	system("leaks a.out");
	return (0);
}
