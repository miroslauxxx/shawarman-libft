#include "shawarman-libft.h"
#include "utils.h"

void    ft_lstnew_test(void)
{
    LOG_DEBUG();
    long ft = 42;
    t_list *lst = ft_lstnew((void *)ft);
    /* #1 */ check(ft == (long)lst->content);
    /* #2 */ check(lst->next == NULL);
    free(lst);
    printf("\n");
}

int	main(void)
{
	ft_lstnew_test();
}
