#include "shawarman-libft.h"
#include "utils.h"

void    ft_tolower_test(void)
{
    LOG_DEBUG();
    /* #1 */
    for (int i = 64; i <= 90; i++)
        if (!(ft_tolower(i) == tolower(i)))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_tolower_test();
}
