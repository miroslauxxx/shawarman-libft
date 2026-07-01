#include "shawarman-libft.h"
#include "utils.h"

void    ft_lstlast_test(void)
{
    LOG_DEBUG();
    char *str_ft = ft_strdup("forty two");
    char *str_m = ft_strdup("miroslaux");
    char *str_n = ft_strdup("1337");

	t_list *lst = NULL; 
	/* #1 */ check(ft_lstlast(lst) == 0);
    lst = ft_lstnew((void *)str_ft);
	/* #2 */ check(strcmp(ft_lstlast(lst)->content, str_ft) == 0);
    t_list *lst_new = ft_lstnew((void *)str_m);
    t_list *lst_last = ft_lstnew((void *)str_n);

    ft_lstadd_back(&lst, lst_new);
	/* #3 */ check(strcmp(ft_lstlast(lst)->content, str_m) == 0);
    ft_lstadd_back(&lst, lst_last);
	/* #4 */ check(strcmp(ft_lstlast(lst)->content, str_n) == 0);

	free_list(lst);
    printf("\n");
}

int	main(void)
{
	ft_lstlast_test();
}
