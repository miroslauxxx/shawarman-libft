#include "shawarman-libft.h"
#include "utils.h"

void    ft_calloc_test(void)
{
        LOG_DEBUG();
        int vector[25] = {0};
        int *arr;
        arr = ft_calloc(10, sizeof(int));  

		/* #1 */ check(arr[9] == 0); 		/*read 	  36-40 bytes  */
        free(arr); 					 		/*char  = 1 	byte   */
		arr = ft_calloc(INT_MIN, INT_MIN); 	/*int   = 4 	byte   */
		/* #2 */ check(arr == NULL); 		/*short = 2 	byte   */ 
        free(arr); 							/*long  = 8 	bytes */
        arr = ft_calloc(INT_MAX, INT_MAX);
        /* #3 */ check(arr == NULL);
        free(arr);
        arr = ft_calloc(INT_MAX, INT_MIN);
        /* #4 */ check(arr == NULL);
        free(arr);
        arr = ft_calloc(sizeof(vector), sizeof(int));
        /* #5 */ check(memcmp(arr, vector, 100) == 0); 
        free(arr);
        printf("\n");
}

int	main(void)
{
	ft_calloc_test();
}
