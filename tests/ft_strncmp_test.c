#include "shawarman-libft.h"
#include "utils.h"

void    ft_strncmp_test(void)
{
    LOG_DEBUG();
    /* #1 */ check(ft_strncmp("Hello", "Hello", 6) == strncmp("Hello", "Hello", 6));
    /* #2 */ check(ft_strncmp("Hell1", "Hell1", 5) == strncmp("Hell1", "Hell1", 5));
    /* #2 */ check(ft_strncmp("Hell1", "Hell1", 0) == strncmp("Hell1", "Hell1", 0));
    /* #3 */ check(ft_strncmp("Hely", "Hely", 5) == strncmp("Hely", "Hely", 5));
    /* #4 */ check(ft_strncmp("Hely", "Hely", 3) == strncmp("Hely", "Hely", 3));
    /* #5 */ check(ft_strncmp("", "", 1) == strncmp("", "", 1));
    /* #5 */ check(ft_strncmp("", "", 0) == strncmp("", "", 0));
    printf("\n");
}

int	main(void)
{
	ft_strncmp_test();
}
