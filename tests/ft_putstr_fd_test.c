#include "shawarman-libft.h"
#include "utils.h"

void    ft_putstr_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
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

    fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putstr_fd("", fd);
    lseek(fd, SEEK_SET, 0);
    memset(buf, 0, sizeof(buf));
    read(fd, buf, 2);
    /* #2 */ check(strcmp(buf, "") == 0);
    close(fd);
    unlink("./miroslaux");

	int pipefd[2];
	if (pipe(pipefd) < 0)
		return ;
	ft_putstr_fd("hi++ ysup!", pipefd[1]);
	close(pipefd[1]);
	memset(buf, 0, sizeof(buf));
	int bytes_read = read(pipefd[0], buf, sizeof(buf) -1);
	close(pipefd[0]);
	if (bytes_read < 0)
		return ;
	/* #3 */ check(strcmp("hi++ ysup!", buf) == 0);
    printf("\n");
}

int	main(void)
{
	ft_putstr_fd_test();
}
