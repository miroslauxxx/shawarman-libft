#include "shawarman-libft.h"
#include "utils.h"

static void    iter_helper_toUp(unsigned int i, char *str)
{
    ((void) i);
    *str = ft_toupper(*str);
}

static void    iter_helper_toLower(unsigned int i, char *str)
{
    ((void) i);
    *str = ft_tolower(*str);
}

void    ft_striteri_test(void)
{
    LOG_DEBUG();
    char empty[] = "";
    char str[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life";
    char str1[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life";
    char strUpper[] = "DEATH EI$TS, NOT @$ THE 0PP0$ITE BUT AS A PART OF LIFE";
    char strLower[] = "death ei$ts, not @$ the 0pp0$ite but as a part of life";
    ft_striteri(str, iter_helper_toUp);
    /* #1 */ check(strncmp(str, strUpper, sizeof(str)) == 0);
    ft_striteri(str1, iter_helper_toLower);
    /* #2 */ check(strncmp(str1, strLower, sizeof(str1)) == 0);
    ft_striteri(empty, iter_helper_toLower);
    /* #3 */ check(strncmp("", empty, 1) == 0);
    printf("\n");
}

int	main(void)
{
	ft_striteri_test();
}
