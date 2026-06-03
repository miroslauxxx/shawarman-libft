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
		printf("\n");
}

void	ft_calloc_test(void)
{	
		LOG_DEBUG();
		int charr[100] = {0};
		int *arr;
		arr = ft_calloc(10, 1);
		/* #1 */ check(arr[9] == 0);
		free(arr);
		arr = ft_calloc(INT_MIN, INT_MIN);
		/* #2 */ check(arr == NULL);
		free(arr);
		arr = ft_calloc(INT_MAX, INT_MAX);
		/* #3 */ check(arr == NULL);
		free(arr);
		arr = ft_calloc(INT_MAX, INT_MIN);
		/* #4 */ check(arr == NULL);
		free(arr);
		arr = ft_calloc(sizeof(charr), sizeof(int));
		/* #5 */ check(memcmp(arr, charr, 100) == 0);
		free(arr);
		printf("\n");
}

void	ft_strdup_test(void)
{
		LOG_DEBUG();
		void *ptr;
	   	ptr	= ft_strdup("");
		/* #1 */ check(memcmp(ptr, "", 1) == 0);
		free(ptr);
		ptr = ft_strdup("Hello, 42");
		/* #2 */ check(memcmp(ptr, "Hello, 42", 10) == 0);	
		free(ptr);
		printf("\n");
}


void	ft_strlen_test(void)
{
	LOG_DEBUG();
	char *str = "string";
	/* #1 */ check(ft_strlen(str) == strlen(str));
	str = "string\0\0\0string";
	/* #2 */ check(ft_strlen(str) == strlen(str));
	str = "\0\0\0string";
	/* #3 */ check(ft_strlen(str) == strlen(str));
	str = "\r\t\nstring";
	/* #4 */ check(ft_strlen(str) == strlen(str));
	str = "";
	/* #5 */ check(ft_strlen(str) == strlen(str));
	printf("\n");
}

void	ft_strlcpy_test(void)
{
	LOG_DEBUG();
	char	src[] = "shawarman"; /*src_len = 9*/
	char	dst[11] = "4242424242"; /*dst_len = 10*/
	size_t	src_len = ft_strlen(src);
	/* #1 */ check(ft_strlcpy(dst, src, 0) == src_len && dst[1] == '2'); 
	/* #2 */ check(ft_strlcpy(dst, src, 1) == src_len && dst[1] == '2' && dst[0] != '4');
	/* #3 */ check(ft_strlcpy(dst, src, 2) == src_len && dst[1] == '\0' && dst[0] == 's');
	/* #4 */ check(ft_strlcpy(dst, src, -1) == src_len && !strcmp(src, dst) && dst[0] == 's');ft_memset(dst, '6', 10); 
	/* #5 */ check(ft_strlcpy(dst, src, 6) == src_len && memcmp(dst, src, 6) && dst[5] == 0);
	/* #6 */ check(ft_strlcpy(dst, "", 1) == 0 && !memcmp(dst, "", 1)); ft_memset(dst, '7', 10);
	/* #7 */ check(ft_strlcpy(dst, "1", 0) == 1 && dst[0] == '7'); ft_memset(dst, '8', 10);
	printf("\n");
}

void	ft_strchr_test(void)
{
	LOG_DEBUG();
	char 	src[] = "shawarmanimBerlin";
	size_t	src_len = ft_strlen(src);
	/* #1 */ check(ft_strchr(src, 's') == src); 
	/* #2 */ check(ft_strchr(src, 'h') == src +1); 
	/* #3 */ check(ft_strchr(src, 'w') == src +3); 
	/* #4 */ check(ft_strchr(src, 'B') == src +11); 
	/* #5 */ check(ft_strchr(src, 0) == src +src_len); 
	/* #6 */ check(ft_strchr(src, 'W') == NULL); 
	printf("\n");
}

void	ft_strrchr_test(void)
{
	LOG_DEBUG();
	char 	src[] = "shawarmanimBerlin";
	char	src_clear[] = "";
	size_t	src_len = ft_strlen(src);
	/* #1 */ check(ft_strrchr(src, 'n') == src + (src_len -1)); 
	/* #2 */ check(ft_strrchr(src, 'i') == src + (src_len -2)); 
	/* #3 */ check(ft_strrchr(src, 'B') == src + (src_len -6)); 
	/* #4 */ check(ft_strrchr(src_clear, 'B') == NULL); 
	/* #5 */ check(ft_strrchr(src, '\0') == src + src_len); 
	/* #5 */ check(ft_strrchr(src, 's' +256) == src); 
	char	*src_empty = ft_calloc(1, 1);
	/* #6 */ check(ft_strrchr(src_empty, 'N') == NULL); free(src_empty); 
 	printf("\n");
}

void	ft_strncmp_test(void)
{
	LOG_DEBUG();
	/* #1 */ check(ft_strncmp("Hello", "Hello", 6) == strncmp("Hello", "Hello", 6));
	/* #2 */ check(ft_strncmp("Hell1", "Hell1", 5) == strncmp("Hell1", "Hell1", 5));
	/* #2 */ check(ft_strncmp("Hell1", "Hell1", 0) == strncmp("Hell1", "Hell1", 0));
	/* #3 */ check(ft_strncmp("Hely", "Hely", 5) == strncmp("Hely", "Hely", 5));
	/* #4 */ check(ft_strncmp("Hely", "Hely", 3) == strncmp("Hely", "Hely", 3));
	/* #5 */ check(ft_strncmp("", "", 1) == strncmp("", "", 1));
	/* #5 */ check(ft_strncmp("", "", 0) == strncmp("", "", 0));
	printf("\n");
}

void	ft_strnstr_test(void)
{
	LOG_DEBUG();
	char *haystack = "Death exists, not as the opposite but as a part of life";
	/*				  01234567890123456789012345678901234567890123456789012345 */
	char *needle = "as";
	char *empty = "";
	/* #1 */ check(ft_strnstr(haystack, needle, 0) == 0);
	/* #2 */ check(ft_strnstr(haystack, needle, -1) == haystack +18);
	/* #3 */ check(ft_strnstr(haystack, "a", -1) == haystack +2);
	/* #4 */ check(ft_strnstr(haystack, "D", -1) == haystack);
	/* #5 */ check(ft_strnstr(empty, "", -1) == empty);
	/* #6 */ check(ft_strnstr("", empty, -1) == empty);
	/* #7 */ check(ft_strnstr(haystack, "hot", -1) == NULL);
	/* #8 */ check(ft_strnstr(haystack, "not", 14) == NULL);
	/* #9 */ check(ft_strnstr(haystack, "not", 16) == NULL);
	/* #10 */ check(ft_strnstr(haystack, "not", 17) == haystack +14);
	/* #11 */ check(ft_strnstr(haystack, "got", 17) == NULL);
	/* #12 */ check(ft_strnstr("got", "got", 4) == (char*)"got");
	/* #13 */ check(ft_strnstr("got", "got", 3) == (char*)"got");
	/* #14 */ check(ft_strnstr("got", "123", 0) == 0);
	/* #15 */ check(ft_strnstr("got", "got", 2) == 0);
	printf("\n");
}

void	ft_substr_test(void)
{
	LOG_DEBUG();
	char *str = ft_substr("forty two", 3, -1);
	/* #1 */ check(strncmp(str, "ty two", 6) == 0); 
	str = ft_substr("forty two", 3, 0);
	/* #2 */ check(strncmp(str, "", 10) == 0);
	str = ft_substr("forty two", 11, 0);
	/* #3 */ check(strncmp(str, "", 1) == 0);
	str = ft_substr("Death exists, not as the opposite but as a part of life", 21, 12);
	/*				 01234567890123456789012345678901234567890123456789012345*/
	/* #4 */ check(strncmp(str, "the opposite", 14) == 0);
	str = ft_substr("Death exists, not as the opposite but as a part of life", 21, -1);
	/* #5 */ check(strncmp(str, "the opposite but as a part of life", 14) == 0);
	str = ft_substr("Glory to Ukraine!", 9, 19);
	/* #6 */ check(strncmp(str, "Ukraine!", 8) == 0);
	str = ft_substr("Glory to Ukraine!", 16, 17);
	/* #7 */ check(strncmp(str, "!", 1) == 0);
	printf("\n");
}

void	ft_strjoin_test(void)
{
	LOG_DEBUG();
	char *str = ft_strjoin("I love", " 42");
	/* #1 */ check(strncmp(str, "I love 42", 9) == 0); 
	str = ft_strjoin("", " 42");
	/* #2 */ check(strncmp(str, " 42", 3) == 0);
	str = ft_strjoin("42 ", "");
	/* #3 */ check(strncmp(str, "42 ", 1) == 0);
	str = ft_strjoin("", "");
	/* #4 */ check(strncmp(str, "", 1) == 0);
	str = ft_strjoin(" ", "");
	/* #5 */ check(strncmp(str, " ", 1) == 0);
	printf("\n");
}

void	ft_strtrim_test(void)
{
	LOG_DEBUG();
	char *str = ft_strtrim("xxxmiroslauxxx", "x");
	/* #1 */ check(strncmp(str, "miroslau", 8) == 0);
	str = ft_strtrim("xxxmiroslauxxx", "");
	/* #2 */ check(strncmp(str, "xxxmiroslauxxx", 14) == 0);
	str = ft_strtrim("xxxmiroslauxxx", "xxx");
	/* #3 */ check(strncmp(str, "miroslau", 8) == 0);
	str = ft_strtrim(" x x x miroslau x x x ", " x ");
	/* #4 */ check(strncmp(str, "miroslau", 8) == 0);
	str = ft_strtrim(" x x x miroslau x x x ", " + ");
	/* #5 */ check(strncmp(str, "x x x miroslau x x x", 19) == 0);
	str = ft_strtrim(" xx xx x xxxx ", " x");
	/* #6 */ check(strncmp(str, "", 1) == 0);
	printf("\n");
}

void	ft_split_test(void)
{
	LOG_DEBUG();
	/* #1 */ 
	char *str = ">>> SPLIT WILL BE IMPLEMENTED WITH MEMORY MCHECK <<<";
	printf(RED "\n%s\n", str);
	printf("\n");
}


void	iter_helper_toUp(unsigned int i, char *str)
{
	((void) i);
	if (*str >= 97 && *str <= 122)
		*str -= 32;
}

void	iter_helper_toLower(unsigned int i, char *str)
{
	((void) i);
	if (*str >= 65 && *str <= 90)
		*str += 32;
	else
		return ;
}


void	ft_striteri_test(void)
{
	LOG_DEBUG();
	char empty[] = ""; 
	char str[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life"; 
	char str1[] = "DeaTh Ei$tS, Not @$ thE 0pp0$ite but as a part of Life"; 
	char strUpper[] = "DEATH EI$TS, NOT @$ THE 0PP0$ITE BUT AS A PART OF LIFE"; 
	char strLower[] = "death ei$ts, not @$ the 0pp0$ite but as a part of life"; 
	ft_striteri(str, iter_helper_toUp);
	/* #1 */ check(strncmp(str, strUpper, sizeof(str)) == 0); 
	ft_striteri(str1, iter_helper_toLower);
	/* #2 */ check(strncmp(str1, strLower, sizeof(str1)) == 0); 
	ft_striteri(empty, iter_helper_toLower);
	/* #3 */ check(strncmp("", empty, 1) == 0);
 	printf("\n");
}


/* void	ft_|_test(void) */
/* { */
/* 	LOG_DEBUG(); */
/* 	/1* #1 *1/ */ 
/*  	printf("\n%s\n", str); */
/*  	printf("\n"); */
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
		ft_strdup_test();
		ft_strlen_test();
		ft_strlcpy_test();
		ft_strchr_test();
		ft_strrchr_test();
		ft_strncmp_test();
		ft_strnstr_test();
		ft_substr_test();
		ft_strtrim_test();
		ft_split_test();
		ft_striteri_test();
}
