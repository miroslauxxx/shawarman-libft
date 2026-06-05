#include "shawarman-libft.h"
#include "utils.h"

void    ft_strtrim_test(void)
{
    LOG_DEBUG();
    char *str = ft_strtrim("xxxmiroslauxxx", "x");
    /* #1 */ check(strncmp(str, "miroslau", 8) == 0);
	free(str);
    str = ft_strtrim("xxxmiroslauxxx", "");
    /* #2 */ check(strncmp(str, "xxxmiroslauxxx", 14) == 0);
	free(str);
    str = ft_strtrim("xxxmiroslauxxx", "xxx");
    /* #3 */ check(strncmp(str, "miroslau", 8) == 0);
	free(str);
    str = ft_strtrim(" x x x miroslau x x x ", " x ");
    /* #4 */ check(strncmp(str, "miroslau", 8) == 0);
	free(str);
    str = ft_strtrim(" x x x miroslau x x x ", " + ");
    /* #5 */ check(strncmp(str, "x x x miroslau x x x", 19) == 0);
	free(str);
    str = ft_strtrim(" xx xx x xxxx ", " x");
    /* #6 */ check(strncmp(str, "", 1) == 0);
	free(str);
    printf("\n");
}

int	main(void)
{
	ft_strtrim_test();
}
