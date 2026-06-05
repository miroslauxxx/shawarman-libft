#include "shawarman-libft.h"
#include "utils.h"

void    ft_strchr_test(void)
{
    LOG_DEBUG();
    char    src[] = "shawarmanimBerlin";
    size_t  src_len = ft_strlen(src);
    /* #1 */ check(ft_strchr(src, 's') == src);
    /* #2 */ check(ft_strchr(src, 'h') == src +1);
    /* #3 */ check(ft_strchr(src, 'w') == src +3);
    /* #4 */ check(ft_strchr(src, 'B') == src +11);
    /* #5 */ check(ft_strchr(src, 0) == src +src_len);
    /* #6 */ check(ft_strchr(src, 'W') == NULL);
    printf("\n");
}

int	main(void)
{
	ft_strchr_test();
}
