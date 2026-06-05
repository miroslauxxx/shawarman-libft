#include "shawarman-libft.h"
#include "utils.h"

void    ft_memcmp_test(void){

        LOG_DEBUG();
        /* #1 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
        /* #2 */ check(ft_memcmp("Helm", "Hell", 4) == memcmp("Helm", "Hell", 4));
        /* #3 */ check(ft_memcmp("Helm", "Hell", 4) == memcmp("Helm", "Hell", 4));
        /* #4 */ check(ft_memcmp("Hedlo", "Heelm", 4) == memcmp("Hedll", "Heelm", 4));
        /* #5 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
        /* #6 */ check(ft_memcmp("", "", 1) == memcmp("", "", 1));
        /* #7 */ check(ft_memcmp("", "", 0) == memcmp("", "", 0));
        /* #8 */ check(ft_memcmp("\n", "\n", 0) == memcmp("\n", "\n", 0));

        printf("\n");
}


int	main(void)
{
	ft_memcmp_test();
}
