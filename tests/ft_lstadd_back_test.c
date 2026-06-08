#include "shawarman-libft.h"
#include "utils.h"

void ft_lstadd_back_test(void)
{
	LOG_DEBUG();
	char *str_ft = ft_strdup("forty two");
	char *str_m = ft_strdup("miroslaux");
	char *str_n = ft_strdup("1337");

	t_list *lst1 = ft_lstnew((void *)str_ft);
	t_list *lst2 = ft_lstnew((void *)str_m);
	t_list *lst3 = ft_lstnew((void *)str_n);

	t_list *lst4 = ft_lstnew((void *)str_m);
	t_list *lst5 = ft_lstnew((void *)str_m);

	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst2, lst3);
	
	
	ft_lstadd_front(&lst4, lst5);
	
	ft_lstadd_back(&lst4, lst1);

	printf("%s",(char *)lst1->content);
	/* ft_lstclear(&lst1, free); */
	/* ft_lstclear(&lst4, free); */
	/* check(strcmp(str_n, (char *)lst->content) == 0); */

	/* printf("not implemented yet\n"); */
}

int	main(void)
{
	ft_lstadd_back_test();
}
