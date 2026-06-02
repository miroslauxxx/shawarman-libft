#include "shawarman-libft.h"
#include "helper.h"

void	check(bool success)
{
	if (success)
		SUCCESS();
	else
		FAILURE();
}

void	ft_memcpy_test(void)
{
	char src[11] = "0000000000";
	char dst[11] = "1234567890";

	LOG_DEBUG();
	/* #1 */ check(memcmp(ft_memcpy(dst, src, 0), dst, 0) == 0);
	/* #2 */ check(memcmp(ft_memcpy(dst, src, 1), dst, 1) == 0);
	/* #3 */ check(memcmp(ft_memcpy(dst, src, 5), dst, 5) == 0);
	/* #4 */ check(memcmp(ft_memcpy(dst, src, 11), dst, 11) == 0);
	printf("\n");	
}

void	ft_memset_test(void)
{
	char dst[11] = "0000000000";
	int arr[5];

	LOG_DEBUG();
	/* #1 */ check(memcmp(ft_memset(dst, '%', 0), dst, 0) == 0);
	/* #2 */ check(memcmp(ft_memset(dst, '*', 1), "*", 1) == 0);
	/* #3 */ check(memcmp(ft_memset(dst, '1', 5), "11111", 5) == 0);
	/* #4 */ check(memcmp(ft_memset(dst, 289, 5), "!!!!!", 5) == 0);
	/* #5 */ ft_memset(arr, 1, sizeof(arr));
	for(int i = 0; i < 5; i++)
	{
		if (arr[i] == 16843009)
			break ;
		else
		{
			check(1 == 2);
			return;
		}
	}
	printf("\n");	
}

void	ft_memmove_test(void)
{
	char src[11] = "1234567890";
	char dst[11] = "0000000000";
	char src1[11] = "1234567890";
	char src11[11] = "1234567890";

	LOG_DEBUG();
	/* #1 */ check(memcmp(ft_memmove(dst, src, 0), "0", 1) == 0);
	/* #2 */ check(memcmp(ft_memmove(dst, src, 1), "1", 1) == 0);
	/* #3 */ check(memcmp(ft_memmove(dst, src, 3), "123", 3) == 0);
			 ft_memmove(src +4, src +2, 4);
	/* #4 */ check(memcmp(src, "1234345690", 10) == 0);
			 ft_memmove(src1 +2, src1 +4, 4); 
	/* #5 */ check(memcmp(src1, "1256787890", 9) == 0);
			 ft_memmove(src11 +3, src11 +1, 4);
	/* #6 */ check(memcmp(src11, "1232345890", 9) == 0);

	printf("\n");	
}

void	ft_memcmp_test(void){
	
	LOG_DEBUG();
	/* #1 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
	/* #2 */ check(ft_memcmp("Helm", "Hell", 4) == memcmp("Helm", "Hell", 4));
	/* #3 */ check(ft_memcmp("Helm", "Hell", 4) == memcmp("Helm", "Hell", 4));
	/* #4 */ check(ft_memcmp("Hedlo", "Heelm", 4) == memcmp("Hedll", "Heelm", 4));
	/* #5 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
	/* #6 */ check(ft_memcmp("", "", 1) == memcmp("", "", 1));
	/* #7 */ check(ft_memcmp("", "", 0) == memcmp("", "", 0));
	/* #8 */ check(ft_memcmp("\n", "\n", 0) == memcmp("\n", "\n", 0));

	printf("\n");	
}

void	ft_memchr_test(void)
{
	char *src = "Ysup ft forty two two";
	LOG_DEBUG();
	/* #1 */ check(ft_memchr(src, 's', 11) == src + 1); 
	/* #2 */ check(ft_memchr(src, 'p', 11) == src + 3);
	/* #3 */ check(ft_memchr(src, 'f', 11) == src + 5);
	/* #4 */ check(ft_memchr(src, 'v', 0) == NULL);
	/* #5 */ check(ft_memchr(src, 'w', 1000) == src + 15);
	/* #6 */ check(ft_memchr(src, '\0', 1000) == memchr(src, '\0', 1000));
	printf("\n");	
}

void	ft_bzero_test(void)
{
	char arrA[10];
	memset(arrA, 'A', 10);
	LOG_DEBUG();
			 ft_bzero(arrA, 0);
	/* #1 */ check(arrA[5] == 'A' && arrA[9] == 'A');
			 ft_bzero(arrA, 10);
	/* #2 */ check(arrA[5] == 0 && arrA[9] == 0);

}

void	ft_calloc_test(void)
{	
	LOG_DEBUG();
	void *charr;
	void *arr;
	arr = ft_calloc(10, 1);
	/* #1 */ check(sizeof(arr) == sizeof(charr));
			free(arr);
	charr = ft_calloc(0, 0);
}


/* void	ft_|_test(void) */
/* { */
/* 	LOG_DEBUG(); */
/* 	/1* #1 *1/ */ 
/* } */

int	main(void)
{
	ft_memcpy_test();
	ft_memset_test();
	ft_memmove_test();
	ft_memcmp_test();
	ft_memchr_test();
	ft_bzero_test();
	ft_calloc_test();
}
