#include "shawarman-libft.h"
#include "utils.h"

void    ft_strjoin_test(void)
{
    LOG_DEBUG();
    char *str = ft_strjoin("I love", " 42");
    /* #1 */ check(strncmp(str, "I love 42", 9) == 0);
	free(str);
    str = ft_strjoin("", " 42");
    /* #2 */ check(strncmp(str, " 42", 3) == 0);
	free(str);
    str = ft_strjoin("42 ", "");
    /* #3 */ check(strncmp(str, "42 ", 1) == 0);
	free(str);
    str = ft_strjoin("", "");
    /* #4 */ check(strncmp(str, "", 1) == 0);
	free(str);
    str = ft_strjoin(" ", "");
    /* #5 */ check(strncmp(str, " ", 1) == 0);
	free(str);
    printf("\n");
}

int	main(void)
{
	ft_strjoin_test();
}
