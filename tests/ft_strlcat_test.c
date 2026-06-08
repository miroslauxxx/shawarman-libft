#include "shawarman-libft.h"
#include "utils.h"

void    ft_strlcat_test(void)
{
    LOG_DEBUG();
    char    src[] = "shawarman"; /*src_l = 9*/
    char    dest[30] = "4242424242"; /*dst_len = 10*/
	size_t	src_l = strlen(src);

	/* #1 */ check(ft_strlcat(dest, src, 0) == strlen(src) && !strncmp(dest, "4", 1));
	/* #2 */ check(ft_strlcat(dest, src, 1) == strlen(src) +1 && !strncmp(dest, "4", 1));
	/* #3 */ check(ft_strlcat(dest, src, -1) == strlen(src) + 10&& !strcmp(dest, "4242424242shawarman"));
	/* #4 */ check(ft_strlcat(dest, src, 8) == src_l +8 && !strncmp(dest, "4242424242shawarma", src_l +8));
	/* #5 */ check(ft_strlcat(dest, src, 9) == src_l +9 && !strcmp(dest, "4242424242shawarman"));
	/* #6 */ check(ft_strlcat(dest, src, 10) == src_l +10 && !strcmp(dest, "4242424242shawarman"));
	/* #7 */ check(ft_strlcat(dest, src, 11) == src_l +11 && !strcmp(dest, "4242424242shawarman"));ft_bzero(dest, 20);
	/* #8 */ check(ft_strlcat(dest, "", 1) == 0 && !strcmp(dest, ""));
	/* #9 */ check(ft_strlcat(dest, " ", 1) == 1 && !strcmp(dest, ""));
	memset(dest, '4', 20);
	/* #10 */ check(ft_strlcat(dest, "", 20) == 20 && !strcmp(dest, "44444444444444444444"));
	/* #11 */ check(ft_strlcat(dest, src, 30) == 29 && !strcmp(dest, "44444444444444444444shawarman"));

    printf("\n");
}


int	main(void)
{
	ft_strlcat_test();
}
