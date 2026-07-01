#include "shawarman-libft.h"
#include "utils.h"

void ft_lstsize_test(void) 
{
		LOG_DEBUG();
		
		int d[5] = {666};
		
		t_list *lst  = ft_lstnew((void *)d);
		t_list *lst1 = ft_lstnew((void *)d);
		t_list *lst2 = ft_lstnew((void *)d);
		t_list *lst3 = ft_lstnew((void *)d);

		/* #1 */ check(ft_lstsize(lst) == 1);
		ft_lstadd_front(&lst, lst1);
		ft_lstadd_front(&lst, lst2);
		ft_lstadd_front(&lst, lst3);
		/* #2 */ check(ft_lstsize(lst) == 4);
		free_list(lst);
		printf("\n");
}

int	main(void)
{
		ft_lstsize_test();
}
