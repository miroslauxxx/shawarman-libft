#include "shawarman-libft.h"
#include "utils.h"

void    ft_putendl_fd_test(void)
{
    LOG_DEBUG();
    int fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putendl_fd("miroslaux", fd);
    lseek(fd, SEEK_SET, 0);
    char buf[25] = {0};
    read(fd, buf, 25);
    /* #1 */ check(strcmp(buf, "miroslaux\n") == 0);
    close(fd);
    unlink("./miroslaux");

    fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
    ft_putendl_fd("g", fd);
    lseek(fd, SEEK_SET, 0);
    memset(buf, 0, sizeof(buf));
    read(fd, buf, 3);
    /* #2 */ check(strcmp(buf, "g\n") == 0);
    close(fd);
    unlink("./miroslaux");

	int pipefd[2];
	if (pipe(pipefd) < 0)
		return ;
	ft_putendl_fd("42", pipefd[1]);
	close(pipefd[1]);
	memset(buf, 0, sizeof(buf));
	int bytes_read = read(pipefd[0], buf, sizeof(buf) -1);
	close(pipefd[0]);
	if (bytes_read < 0)
		return ;
	/* #3 */ check(strcmp(buf, "42\n") == 0);

	printf("\n");
}

int	main(void)
{
	ft_putendl_fd_test();
}
