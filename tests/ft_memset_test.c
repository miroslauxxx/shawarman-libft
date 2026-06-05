#include "shawarman-libft.h"
#include "utils.h"

void ft_memset_test(void)
{
		char dst[11] = "0000000000";
		int arr[5];

		LOG_DEBUG();
		/* #1 */ check(memcmp(ft_memset(dst, '%', 0), dst, 0) == 0);
		/* #2 */ check(memcmp(ft_memset(dst, '*', 1), "*", 1) == 0);
		/* #3 */ check(memcmp(ft_memset(dst, '1', 5), "11111", 5) == 0);
		/* #4 */ check(memcmp(ft_memset(dst, 289, 5), "!!!!!", 5) == 0);
		/* #5 */ ft_memset(arr, 1, sizeof(arr));
		for(int i = 0; i < 5; i++)
		{
				if (arr[i] == 16843009)
						break ;
				else
				{
						check(1 == 2);
						return;
				}
		}
		printf("\n");
}

int	main(void)
{
	ft_memset_test();
}
