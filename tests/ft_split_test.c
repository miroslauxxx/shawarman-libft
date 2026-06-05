#include "shawarman-libft.h"
#include "utils.h"

static void    free_matrix(char **matrix)
{
	int i = 0 ;	
    while(matrix[i])
	{
        free(matrix[i]);
		i++;
	}
    free(matrix);
}

void    ft_split_test(void)
{
    LOG_DEBUG();
    char *str = "  miroslau  x xxx 42";
    char **matrix = ft_split(str, ' ');
    /* #1 */ check(strncmp(matrix[0], "miroslau", 8) == 0);
    /* #2 */ memcheck(matrix[0], strlen("miroslau") +1 );
    /* #3 */ check(strncmp(matrix[1], "x", 1) == 0);
    /* #4 */ memcheck(matrix[1], strlen("x") +1 );
    /* #5 */ check(strncmp(matrix[2], "xxx", 3) == 0);
    /* #6 */ memcheck(matrix[2], strlen("xxx") +1 );
    /* #7 */ check(strncmp(matrix[3], "42", 2) == 0);
    /* #8 */ memcheck(matrix[3], strlen("42") +1 );
    /* #9 */ check(matrix[4] == 0);
    free_matrix(matrix);
    str = "_676767_____6767___67_6_7";
    matrix = ft_split(str, '_');
    /* #1 */ check(strncmp(matrix[0], "676767", 6) == 0);
    /* #2 */ memcheck(matrix[0], strlen("676767") +1 );
    /* #3 */ check(strncmp(matrix[1], "6767", 4) == 0);
    /* #4 */ memcheck(matrix[1], strlen("6767") +1 );
    /* #5 */ check(strncmp(matrix[2], "67", 2) == 0);
    /* #6 */ memcheck(matrix[2], strlen("67") +1 );
    /* #7 */ check(strncmp(matrix[3], "6", 1) == 0);
    /* #8 */ memcheck(matrix[3], strlen("6") +1 );
    /* #9 */ check(strncmp(matrix[4], "7", 1) == 0);
    /* #10 */ memcheck(matrix[4], strlen("7") +1 );
    /* #11 */ check(matrix[5] == 0);
    free_matrix(matrix);
    str = ";;;;;";
    matrix = ft_split(str, ';');
    /* #12 */ check(matrix[0] == NULL);
    free_matrix(matrix);
    printf("\n");
}


int	main(void)
{
	ft_split_test();
}
