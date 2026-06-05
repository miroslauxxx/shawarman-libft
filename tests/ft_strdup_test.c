#include "shawarman-libft.h"
#include "utils.h"

void    ft_strdup_test(void)
{
        LOG_DEBUG();
        void *ptr;
        ptr = ft_strdup("");
        /* #1 */ check(memcmp(ptr, "", 1) == 0);
        free(ptr);
        ptr = ft_strdup("Hello, 42");
        /* #2 */ check(memcmp(ptr, "Hello, 42", 10) == 0);
        free(ptr);
        printf("\n");
}


int	main(void)
{
	ft_strdup_test();
}
