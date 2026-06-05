#include "shawarman-libft.h"

void	check(bool success)
{
		if (success)
				SUCCESS("OK ");
		else
				FAILURE("KO ");
}

void    pluscheck(bool success)
{
		if (success)
				SUCCESS("wOK ");
		else
				FAILURE("wKO ");
}

void    memcheck(void *arr, size_t size)
{
		void *arr_check = malloc(size);
		if (malloc_usable_size(arr_check) == malloc_usable_size(arr))
				SUCCESS("mOK ");
		else
				FAILURE("mKO ");
}

