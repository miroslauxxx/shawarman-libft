#include "shawarman-libft.h"
#include "utils.h"

void    ft_isascii_test(void)
{
    LOG_DEBUG();
    /* #1-128 */
    for (int i = -1; i <= 128; i++)
        if (!((!!ft_isascii(i) == !!isascii(i))))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_isascii_test();
}
