#include "shawarman-libft.h"
#include "helper.h"
/*#include "check.h"*/
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
		check((arr[i] != 12684300));

}

void	ft_memmove_test(void)
{
	char src[11] = "1234567890";
	char dst[11] = "0000000000";

	LOG_DEBUG();
	/* #1 */ check(memcmp(ft_memmove(dst, src, 1), "1", 1) == 0);
	/* #2 */ check(memcmp(ft_memmove(dst, src, 3), "123", 3) == 0);
	/* #3 */ check(memcmp(ft_memmove(src +4, src +2, 4), "1245656700", 4) == 0);
	char src_t[11] = "1234567890";
	memmove(src_t +4, src +2, 4);
	printf("%s\n", src);
	printf("%s\n", src_t);
}


void	ft_memcmp_test(void){
	
	LOG_DEBUG();
	/* #1 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
	/* #2 */ check(ft_memcmp("Helm", "Hell", 3) == memcmp("Helm", "Hell", 4));
	/* #3 */ check(ft_memcmp("Helm", "Hell", 4) == memcmp("Helm", "Hell", 4));
	/* #4 */ check(ft_memcmp("Hedlo", "Heelm", 4) == memcmp("Hedll", "Heelm", 4));
	/* #5 */ check(ft_memcmp("Hell", "Helm", 4) == memcmp("Hell", "Helm", 4));
	/* #6 */ check(ft_memcmp("", "", 1) == memcmp("", "", 1));
	/* #7 */ check(ft_memcmp("", "", 0) == memcmp("", "", 0));
	/* #8 */ check(ft_memcmp("\n", "\n", 0) == memcmp("\n", "\n", 0));

}

void	ft_memchr_test(void)
{
	char *src = "Ysup ft forty two two";
	LOG_DEBUG();
	/* #1 */ check(ft_memchr(src, 's', 11) == src + 1); 
	/* #2 */ check(ft_memchr(src, 'p', 11) == src + 4);
	/* #3 */ check(ft_memchr(src, 's', 11) == src + 2);
	/* #4 */ check(ft_memchr(src, 'v', 0) == NULL);
	/* #5 */ check(ft_memchr(src, 'w', 1000) == src + 15);
	/* #6 */ check(ft_memchr(src, 'j', 1000) == NULL);
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
}
