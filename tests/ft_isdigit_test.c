#include "shawarman-libft.h"
#include "utils.h"

void    ft_isdigit_test(void)
{
    LOG_DEBUG();
    /* #1-128 */
    for (int i = -1; i <= 128; i++)
        if (!((!!ft_isdigit(i) == !!isdigit(i))))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_isdigit_test();
}
