#include "shawarman-libft.h"
#include "utils.h"

void ft_strncmp_test(void)
{
		LOG_DEBUG();
		/* #1 */ check(ft_strncmp("Hello", "Hello", 6) == strncmp("Hello", "Hello", 6));
		/* #2 */ check(ft_strncmp("Hell1", "Hell1", 5) == strncmp("Hell1", "Hell1", 5));
		/* #3 */ check(ft_strncmp("Hell1", "Hell1", 0) == strncmp("Hell1", "Hell1", 0));
		/* #4 */ check(ft_strncmp("Hell1", "Hell", 5) == strncmp("Hell1", "Hell", 5));
		/* #5 */ check(ft_strncmp("Hell", "Hell1", 5) == strncmp("Hell", "Hell1", 5));
		/* #6 */ check(ft_strncmp("Hell", "Hell1", 6) == strncmp("Hell", "Hell1", 6));
		/* #7 */ check(ft_strncmp("Hely", "Hely", 5) == strncmp("Hely", "Hely", 5));
		/* #8 */ check(ft_strncmp("Hely", "Hely", 3) == strncmp("Hely", "Hely", 3));
		/* #9 */ check(ft_strncmp("", "", 1) == strncmp("", "", 1));
		/* #10 */ check(ft_strncmp("", "", 0) == strncmp("", "", 0));
		/* #8 */ check(ft_strncmp("H", "He", 2) == strncmp("H", "He", 2));
		/* #8 */ check(ft_strncmp("H", "He", 1) == strncmp("H", "He", 1));
		/* #8 */ check(ft_strncmp("", "He", 1) == strncmp("", "He", 1));
		printf("\n");
}
int	main(void)
{
	ft_strncmp_test();
}
