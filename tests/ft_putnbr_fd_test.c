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
    memset(buf, 0, sizeof(buf));
    read(fd, buf, 11);
    /* #2 */ check(strcmp(buf, "-2147483648") == 0);
    close(fd);
    unlink("./miroslaux");

	int	pipefd[2];
	if (pipe(pipefd) < 0)
		return ;
	ft_putnbr_fd(42, pipefd[1]);
	close(pipefd[1]);
    memset(buf, 0, sizeof(buf));
	int bytes_read = read(pipefd[0], buf, sizeof(buf) -1);
	close(pipefd[0]);
	if (bytes_read < 0)
		return ;
	/* #3 */ check(strcmp("42", buf) == 0);

    printf("\n");
}

int	main(void)
{
	ft_putnbr_fd_test();
}
