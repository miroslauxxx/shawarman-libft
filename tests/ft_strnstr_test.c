#include "shawarman-libft.h"
#include "utils.h"

void    ft_strnstr_test(void)
{
    LOG_DEBUG();
    char *haystack = "Death exists, not as the opposite but as a part of life";
    /*                01234567890123456789012345678901234567890123456789012345 */
    char *needle = "as";
    char *empty = "";
    /* #1 */ check(ft_strnstr(haystack, needle, 0) == 0);
    /* #2 */ check(ft_strnstr(haystack, needle, -1) == haystack +18);
    /* #3 */ check(ft_strnstr(haystack, "a", -1) == haystack +2);
    /* #4 */ check(ft_strnstr(haystack, "D", -1) == haystack);
    /* #5 */ check(ft_strnstr(empty, "", -1) == empty);
    /* #6 */ check(ft_strnstr("", empty, -1) == empty);
    /* #7 */ check(ft_strnstr(haystack, "hot", -1) == NULL);
    /* #8 */ check(ft_strnstr(haystack, "not", 14) == NULL);
    /* #9 */ check(ft_strnstr(haystack, "not", 16) == NULL);
    /* #10 */ check(ft_strnstr(haystack, "not", 17) == haystack +14);
    /* #11 */ check(ft_strnstr(haystack, "got", 17) == NULL);
    /* /1* #12 *1/ check(ft_strnstr("got", "got", 4) == (char*)"got"); */ /*FIXFIXFIXFIXFIFX*/
    /* /1* #13 *1/ check(ft_strnstr("got", "got", 3) == (char*)"got"); */ /*FIXFIXFIXFIXFIFX*/
    /* #14 */ check(ft_strnstr("got", "123", 0) == 0);
    /* #15 */ check(ft_strnstr("got", "got", 2) == 0);
    printf("\n");
}

int	main(void)
{
	ft_strnstr_test();
}
