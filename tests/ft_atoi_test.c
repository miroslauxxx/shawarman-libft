#include "shawarman-libft.h"
#include "utils.h"

void    ft_atoi_test(void)
{
    LOG_DEBUG();
    /* #1 */check(atoi("42") == ft_atoi("42"));
    /* #2 */check(atoi("-42") == ft_atoi("-42"));
    /* #3 */check(atoi("42000") == ft_atoi("42000"));
    /* #4 */check(atoi("-42000") == ft_atoi("-42000"));
    /* #5 */check(atoi("+-42000") == ft_atoi("+-42000"));
    /* #6 */check(atoi("     +-42000") == ft_atoi("     +-42000"));
    /* #7 */check(atoi("\r     -42000") == ft_atoi("\r     -42000"));
    /* #8 */check(atoi("\r\t\n\v-42000") == ft_atoi("\r\t\n\v-42000"));
    /* #9 */check(atoi("\r\t\n\v+-42000") == ft_atoi("\r\t\n\v+-42000"));
    /* #10 */check(atoi("\r\t\n\v+a42000") == ft_atoi("\r\t\n\v+a42000"));
    /* #11 */check(atoi("\r\t\n\va42000") == ft_atoi("\r\t\n\va42000"));
    /* #12 */check(atoi("\r\t\n\v42000") == ft_atoi("\r\t\n\v42000"));
    /* #13 */check(atoi("\r\t\n\vAA") == ft_atoi("\r\t\n\vAA"));
    /* #14 */pluscheck(atoi("123456789012345678902123456789023456789") == ft_atoi("123456789012345678902123456789023456789"));
    /* #15 */pluscheck(atoi("-123456789012345678902123456789023456789") == ft_atoi("-123456789012345678902123456789023456789"));
    printf("\n");
}

int	main(void)
{
	ft_atoi_test();
}
