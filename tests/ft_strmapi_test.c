#include "shawarman-libft.h"
#include "utils.h"

static char    mapiter_helper_toUp(unsigned int i, char str)
{
    ((void) i);
    return (ft_toupper(str));
}

static char    mapiter_helper_toLower(unsigned int i, char str)
{
    ((void) i);
    return (ft_tolower(str));
}

void    ft_strmapi_test(void)
{
    LOG_DEBUG();
    char empty[] = "";
    char src[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life";
    char str1[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life";
    char strUpper[] = "DEATH EI$TS, NOT @$ THE 0PP0$ITE BUT AS A PART OF LIFE";
    char strLower[] = "death ei$ts, not @$ the 0pp0$ite but as a part of life";
    char *str = ft_strmapi(src, mapiter_helper_toLower);
    /* #1 */ check(strncmp(str, strLower, sizeof(strLower)) == 0);
    /* #2 */ memcheck((void *)str, strlen(strLower) +1);
	free(str);
    str = ft_strmapi(str1, mapiter_helper_toUp);
    /* #3 */ check(strncmp(str, strUpper, sizeof(strUpper)) == 0);
    /* #4 */ memcheck(str, strlen(strUpper) +1);
	free(str);
    str = ft_strmapi(empty, mapiter_helper_toUp);
    /* #5 */ check(strncmp(str, empty, sizeof(empty)) == 0);
    /* #6 */ memcheck(str, 1);
	free(str);
    printf("\n");
}

int	main(void)
{
	ft_strmapi_test();
}
