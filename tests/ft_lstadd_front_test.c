#include "shawarman-libft.h"
#include "utils.h"

void    ft_lstadd_front_test(void)
{
    LOG_DEBUG();
    char *str_ft = ft_strdup("forty two");
    char *str_m = ft_strdup("miroslaux");
    char *str_n = ft_strdup("1337");

    t_list *lst = ft_lstnew((void *)str_ft);
    t_list *lst_new = ft_lstnew((void *)str_m);
    t_list *lst_last = ft_lstnew((void *)str_n);

    ft_lstadd_front(&lst, lst_new);
    ft_lstadd_front(&lst, lst_last);

    check(strcmp(str_n, (char *)lst->content) == 0);
    check(strcmp(str_m, (char *)lst->next->content) == 0);
    check(strcmp(str_ft, (char *)lst->next->next->content) == 0);

	free_list(lst);
    printf("\n");
}

int	main(void)
{
	ft_lstadd_front_test();
}
