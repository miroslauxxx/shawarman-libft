#include "shawarman-libft.h"
#include "utils.h"

void    ft_memcpy_test(void)
{
		char src[11] = "0000000000";
		char dst[11] = "1234567890";

		LOG_DEBUG();
		/* #1 */ check(memcmp(ft_memcpy(dst, src, 0), dst, 11) == 0);
		/* #2 */ check(memcmp(ft_memcpy(dst, src, 1), dst, 1) == 0);
		/* #3 */ check(dst[0] == '0'&& dst[1] == '2' && dst[2] == '3');
		/* #4 */ check(memcmp(ft_memcpy(dst, NULL, 0), dst, strlen(dst)) == 0);
		/* #5 */ check(memcmp(ft_memcpy(dst, src, 0), dst, 11) == 0);
		/* #6 */ check(memcmp(ft_memcpy(dst, src, 5), dst, 5) == 0);
		/* #7 */ check(memcmp(ft_memcpy(dst, src, 11), dst, 11) == 0);
		printf("\n");
}

int	main(void)
{
	ft_memcpy_test();
}
