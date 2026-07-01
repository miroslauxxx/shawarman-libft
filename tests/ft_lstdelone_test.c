#include "shawarman-libft.h"
#include "utils.h"

void    ft_lstdelone_test(void)
{
    LOG_DEBUG();
	char *str_ft = ft_strdup("forty two");
	char *str_m = ft_strdup("miroslaux");
    t_list *lst = ft_lstnew((void *)str_ft);
    t_list *lstm = ft_lstnew((void *)str_m);

	ft_lstadd_front(&lst, lstm);
	printf("%s", (char *)lst->content);
	printf("%s", (char *)lst->next->content);
    ft_lstdelone(lst->next, free);
	check(lst->next->content == NULL);
    ft_lstdelone(lst, free);

    printf("\n");
}

int	main(void)
{
	ft_lstdelone_test();
}
