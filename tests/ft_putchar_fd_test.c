#include "shawarman-libft.h"
#include "utils.h"

void    ft_putchar_fd_test(void)
{
    LOG_DEBUG();

    int fd = open("miroslaux", O_RDWR | O_CREAT, 0644);
	char arr[7] = {'x', 'X', '4', '@', 'X', '%', 'G'};
    char buf[16] = {0};
	for (int i = 0; i < 7; i++)
			ft_putchar_fd(arr[i], fd);
    lseek(fd, SEEK_SET, 0);
    read(fd, buf, 16);
    /* #1 */ check(strcmp(buf, "xX4@X%G") == 0);
    close(fd);
    unlink("./miroslaux");

	int pipefd[2];
	if (pipe(pipefd) < 0) 
			return ;
	ft_putchar_fd('X', pipefd[1]);
	close(pipefd[1]);
	memset(buf, 0, sizeof(buf));
	int bytes_read = read(pipefd[0], buf, sizeof(buf) -1);
	close(pipefd[0]);
	if (bytes_read < 0) 
			return ;
    /* #2 */ check(strcmp(buf, "X") == 0);

    printf("\n");
}

int	main(void)
{
	ft_putchar_fd_test();
}
