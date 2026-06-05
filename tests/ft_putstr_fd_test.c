#include "shawarman-libft.h"
#include "utils.h"

void    ft_putstr_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT);
    ft_putstr_fd("miroslaux ", fd);
    ft_putstr_fd("from ", fd);
    ft_putstr_fd("42 ", fd);
    ft_putstr_fd("Berlin", fd);
    lseek(fd, SEEK_SET, 0);
    char buf[100] = {0};
    read(fd, buf, 25);
    /* #1 */ check(strcmp(buf, "miroslaux from 42 Berlin") == 0);
    close(fd);
    unlink("./miroslaux");

    fd = open("miroslaux", O_RDWR | O_CREAT);
    ft_putstr_fd("", fd);
    lseek(fd, SEEK_SET, 0);
    char buf1[2];
    read(fd, buf1, 2);
    /* #2 */ check(strcmp(buf1, "") == 0);
    close(fd);
    unlink("./miroslaux");
    printf("\n");
}

int	main(void)
{
	ft_putstr_fd_test();
}
