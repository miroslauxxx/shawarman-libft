#include "shawarman-libft.h"
#include "utils.h"

void    ft_isprint_test(void)
{
    LOG_DEBUG();
    /* #1-128 */
    for (int i = -1; i <= 128; i++)
        if (!((!!ft_isprint(i) == !!isprint(i))))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_isprint_test();
}
