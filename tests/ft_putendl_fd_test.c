#include "shawarman-libft.h"
#include "utils.h"

void    ft_putendl_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT);
    ft_putendl_fd("miroslaux", fd);
    lseek(fd, SEEK_SET, 0);
    char buf[25] = {0};
    read(fd, buf, 25);
    /* #1 */ check(strcmp(buf, "miroslaux\n") == 0);
    close(fd);
    unlink("./miroslaux");

    fd = open("miroslaux", O_RDWR | O_CREAT);
    ft_putendl_fd("g", fd);
    lseek(fd, SEEK_SET, 0);
    char buf1[3] = {0};
    read(fd, buf1, 3);
    /* #2 */ check(strcmp(buf1, "g\n") == 0);
    close(fd);
    unlink("./miroslaux");
    printf("\n");
}

int	main(void)
{
	ft_putendl_fd_test();
}
