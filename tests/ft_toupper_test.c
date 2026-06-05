#include "shawarman-libft.h"
#include "utils.h"

void    ft_toupper_test(void)
{
    LOG_DEBUG();
    /* #97 - 122 */
    for (int i = 96; i <= 122; i++)
        if (!(ft_toupper(i) == toupper(i)))
            FAILURE("KO ");
    SUCCESS("OK ");
    printf("\n");
}

int	main(void)
{
	ft_toupper_test();
}
