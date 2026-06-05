#include "shawarman-libft.h"
#include "utils.h"

void    ft_strlen_test(void)
{
    LOG_DEBUG();
    char *str = "string";
    /* #1 */ check(ft_strlen(str) == strlen(str));
    str = "string\0\0\0string";
    /* #2 */ check(ft_strlen(str) == strlen(str));
    str = "\0\0\0string";
    /* #3 */ check(ft_strlen(str) == strlen(str));
    str = "\r\t\nstring";
    /* #4 */ check(ft_strlen(str) == strlen(str));
    str = "";
    /* #5 */ check(ft_strlen(str) == strlen(str));
    printf("\n");
}


int	main(void)
{
	ft_strlen_test();
}
