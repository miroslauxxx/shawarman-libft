#include "shawarman-libft.h"
#include "utils.h"

void    ft_substr_test(void)
{
    LOG_DEBUG();
    char *str = ft_substr("forty two", 3, -1);
    /* #1 */ check(strncmp(str, "ty two", 6) == 0); /*7 bytes in 1 blocks are definitely lost in loss record 1 of 1* - means memory wasn't deallocated*/
	free(str);
    str = ft_substr("forty two", 3, 0);
    /* #2 */ check(strncmp(str, "", 10) == 0);
	free(str);
    str = ft_substr("forty two", 11, 0);
    /* #3 */ check(strncmp(str, "", 1) == 0);
	free(str);
    str = ft_substr("Death exists, not as the opposite but as a part of life", 21, 12);
    /*               01234567890123456789012345678901234567890123456789012345*/
    /* #4 */ check(strncmp(str, "the opposite", 14) == 0);
	free(str);
    str = ft_substr("Death exists, not as the opposite but as a part of life", 21, -1);
    /* #5 */ check(strncmp(str, "the opposite but as a part of life", 14) == 0);
	free(str);
    str = ft_substr("Glory to Ukraine!", 9, 19);
    /* #6 */ check(strncmp(str, "Ukraine!", 8) == 0);
	free(str);
    str = ft_substr("Glory to Ukraine!", 16, 17);
    /* #7 */ check(strncmp(str, "!", 1) == 0);
	free(str);
    printf("\n");
}

int	main(void)
{
	ft_substr_test();
}
