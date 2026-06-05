#include "shawarman-libft.h"
#include "utils.h"

void    ft_bzero_test(void)
{
        char arrA[10];
        memset(arrA, 'A', 10);
        LOG_DEBUG();
        ft_bzero(arrA, 0);
        /* #1 */ check(arrA[5] == 'A' && arrA[9] == 'A');
        ft_bzero(arrA, 10);
        /* #2 */ check(arrA[5] == 0 && arrA[9] == 0);
        printf("\n");
}

int	main(void)
{
	ft_bzero_test();
}
