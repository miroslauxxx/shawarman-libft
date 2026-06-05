#include "shawarman-libft.h"
#include "utils.h"

void    ft_memmove_test(void)
{
		char src[11] = "1234567890";
		char dst[11] = "0000000000";
		char src1[11] = "1234567890";
		char src11[11] = "1234567890";

		LOG_DEBUG();
		/* #1 */ check(memcmp(ft_memmove(dst, src, 0), "0", 1) == 0);
		/* #2 */ check(memcmp(ft_memmove(dst, src, 1), "1", 1) == 0);
		/* #3 */ check(memcmp(ft_memmove(dst, src, 3), "123", 3) == 0);
		ft_memmove(src +4, src +2, 4);
		/* #4 */ check(memcmp(src, "1234345690", 10) == 0);
		ft_memmove(src1 +2, src1 +4, 4);
		/* #5 */ check(memcmp(src1, "1256787890", 9) == 0);
		ft_memmove(src11 +3, src11 +1, 4);
		/* #6 */ check(memcmp(src11, "1232345890", 9) == 0);

		printf("\n");
}

int	main(void)
{
	ft_memmove_test();	
}
