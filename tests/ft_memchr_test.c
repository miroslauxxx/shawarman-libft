#include "shawarman-libft.h"
#include "utils.h"

void    ft_memchr_test(void)
{
        char *src = "Ysup ft forty two two";
        LOG_DEBUG();
        /* #1 */ check(ft_memchr(src, 's', 11) == src + 1);
        /* #2 */ check(ft_memchr(src, 'p', 11) == src + 3);
        /* #3 */ check(ft_memchr(src, 'f', 11) == src + 5);
        /* #4 */ check(ft_memchr(src, 'v', 0) == NULL);
        /* #5 */ check(ft_memchr(src, 'w', 1000) == src + 15);
        /* #6 */ check(ft_memchr(src, '\0', 1000) == memchr(src, '\0', 1000));
        printf("\n");
}

int	main(void)
{
	ft_memchr_test();
}
