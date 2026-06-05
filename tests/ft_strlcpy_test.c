#include "shawarman-libft.h"
#include "utils.h"

void    ft_strlcpy_test(void)
{
    LOG_DEBUG();
    char    src[] = "shawarman"; /*src_len = 9*/
    char    dst[11] = "4242424242"; /*dst_len = 10*/
    size_t  src_len = ft_strlen(src);
    /* #1 */ check(ft_strlcpy(dst, src, 0) == src_len && dst[1] == '2');
    /* #2 */ check(ft_strlcpy(dst, src, 1) == src_len && dst[1] == '2' && dst[0] != '4');
    /* #3 */ check(ft_strlcpy(dst, src, 2) == src_len && dst[1] == '\0' && dst[0] == 's');
    /* #4 */ check(ft_strlcpy(dst, src, -1) == src_len && !strcmp(src, dst) && dst[0] == 's');ft_memset(dst, '6', 10);
    /* #5 */ check(ft_strlcpy(dst, src, 6) == src_len && memcmp(dst, src, 6) && dst[5] == 0);
    /* #6 */ check(ft_strlcpy(dst, "", 1) == 0 && !memcmp(dst, "", 1)); ft_memset(dst, '7', 10);
    /* #7 */ check(ft_strlcpy(dst, "1", 0) == 1 && dst[0] == '7'); ft_memset(dst, '8', 10);
    printf("\n");
}


int	main(void)
{
	ft_strlcpy_test();
}
