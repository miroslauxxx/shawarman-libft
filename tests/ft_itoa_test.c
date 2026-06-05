#include "shawarman-libft.h"
#include "utils.h"

void    ft_itoa_test(void)
{
    LOG_DEBUG();
	char *str = ft_itoa(42);
    /* #1 */check(strncmp(str, "42", 2) == 0);
	free(str);
	str = ft_itoa(-42);
    /* #2 */check(strncmp(str, "-42", 3) == 0);
	free(str);
	str = ft_itoa(0);
    /* #3 */check(strncmp(str, "0", 1) == 0);
	free(str);
	str = ft_itoa(+0);
    /* #4 */check(strncmp(str, "0", 2) == 0);
	free(str);
	str = ft_itoa(-0);
    /* #5 */check(strncmp(str, "0", 2) == 0);
	free(str);
	str = ft_itoa(-42000);
    /* #6 */check(strncmp(str,"-42000", 6) == 0);
	free(str);
	str = ft_itoa(42000);
    /* #7 */check(strncmp(str, "42000", 5) == 0);
	free(str);
	str = ft_itoa(INT_MIN);
    /* #8 */check(strncmp(str, "-2147483648", 12) == 0);
	free(str);
	str = ft_itoa(INT_MAX);
    /* #9 */check(strncmp(str, "2147483647", 12) == 0);
	free(str);
    printf("\n");
}

int	main(void)
{
	ft_itoa_test();
}
