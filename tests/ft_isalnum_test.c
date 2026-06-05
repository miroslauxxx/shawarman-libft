#include "shawarman-libft.h"
#include "utils.h"

void    ft_isalnum_test(void)
{
    LOG_DEBUG();
    /* #1-128 */
    for (int i = -1; i <= 128; i++)
        if (!((!!ft_isalnum(i) == !!isalnum(i))))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_isalnum_test();
}
