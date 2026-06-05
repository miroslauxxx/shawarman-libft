#include "shawarman-libft.h"
#include "utils.h"

void    ft_strlcat_test(void)
{
    LOG_DEBUG();
    char    src[] = "shawarman"; /*src_len = 9*/
    char    dest[11] = "4242424242"; /*dst_len = 10*/

	/* #1 */ check(ft_strlcat(dest, src, 0) == strlen(src) && !strncmp(dest, "4", 1));
	/* #2 */ check(ft_strlcat(dest, src, 1) == strlen(src) +1 && !strncmp(dest, "4", 1));
	/* #3 */ check(ft_strlcat(dest, src, -1) == strlen(src) + strlen(dest) && !strcmp(dest, "4242424242shawarman"));
	/* /1* #4 *1/ check(ft_strlcat(dest, src, 8) == src_len +8 && !strncmp(dest, "4242424242shawarma", src_len +8)); */
	/* /1* #5 *1/ check(ft_strlcat(dest, src, 9) == src_len +9 && !strncmp(dest, "4242424242shawarman", src_len +9)); */
	/* /1* #6 *1/ check(ft_strlcat(dest, src, 10) == src_len +10 && !strncmp(dest, "4242424242shawarman", src_len +9)); */
	/* /1* #7 *1/ check(ft_strlcat(dest, src, 11) == src_len +11 && !strncmp(dest, "4242424242shawarman", src_len +9));ft_bzero(dest, src_len +9); */
	/* /1* #8 *1/ check(ft_strlcat(dest, "", 5) == 1 && !strncmp(dest, "", 1)); */

    printf("\n");
}


int	main(void)
{
	ft_strlcat_test();
}
