#include "shawarman-libft.h"
#include "utils.h"

void    ft_strrchr_test(void)
{
    LOG_DEBUG();
    char    src[] = "shawarmanimBerlin";
    char    src_clear[] = "";
    size_t  src_len = ft_strlen(src);
    /* #1 */ check(ft_strrchr(src, 'n') == src + (src_len -1));
    /* #2 */ check(ft_strrchr(src, 'i') == src + (src_len -2));
    /* #3 */ check(ft_strrchr(src, 'B') == src + (src_len -6));
    /* #4 */ check(ft_strrchr(src_clear, 'B') == NULL);
    /* #5 */ check(ft_strrchr(src, '\0') == src + src_len);
    /* #5 */ check(ft_strrchr(src, 's' +256) == src);
    char    *src_empty = ft_calloc(1, 1);
    /* #6 */ check(ft_strrchr(src_empty, 'N') == NULL); free(src_empty);
    printf("\n");
}

int	main(void)
{
	ft_strrchr_test();
}
