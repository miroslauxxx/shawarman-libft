#include "shawarman-libft.h"
#include "utils.h"

void    ft_putchar_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putchar_fd('x', fd);
    ft_putchar_fd('X', fd);
    ft_putchar_fd('4', fd);
    ft_putchar_fd('@', fd);
    lseek(fd, SEEK_SET, 0);
    char buf[16] = {0};
    read(fd, buf, 16);
    /* #1 */ check(strcmp(buf, "xX4@") == 0);
    close(fd);
    unlink("./miroslaux");
    printf("\n");
}

int	main(void)
{
	ft_putchar_fd_test();
}
