#include "shawarman-libft.h"
#include "utils.h"

void    ft_putnbr_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putnbr_fd(INT_MAX, fd);
    lseek(fd, SEEK_SET, 0);
    char buf[100] = {0};
    read(fd, buf, 10);
    /* #1 */ check(strcmp(buf, "2147483647") == 0);
    close(fd);
    unlink("./miroslaux");

    fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putnbr_fd(INT_MIN, fd);
    lseek(fd, SEEK_SET, 0);
    char buf1[100] = {0};
    read(fd, buf1, 11);
    /* #2 */ check(strcmp(buf1, "-2147483648") == 0);
    close(fd);
    unlink("./miroslaux");
    printf("\n");
}

int	main(void)
{
	ft_putnbr_fd_test();
}
