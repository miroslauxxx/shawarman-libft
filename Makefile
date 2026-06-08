LIBFT_NAME 		= libft.a
LIBFT_PATH 		= ../libft/
TESTS_PATH 		= tests/
UTILS_PATH		= utils/
FLAGS 			= -g -Wall -Wextra -Werror
LIBFT_A     	= $(LIBFT_PATH)$(LIBFT_NAME)

FUNCTIONS		= $(MEM) $(CCC) $(STR) $(FD) $(LL)
MEM				= memset bzero memcpy memmove memchr memcmp calloc
CCC				= isalpha isdigit isalnum isascii isprint toupper tolower atoi itoa
STR				= strlen strrchr strchr strnstr strdup substr strjoin strtrim split strmapi strlcat
FD				= putchar_fd putstr_fd putendl_fd putnbr_fd
LL				= lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap

all: mem ccc str fd ll
mem: $(MEM)
ccc: $(CCC)
str: $(STR)
fd: $(FD)
ll: $(LL)

$(FUNCTIONS): %: $(LIBFT_A)
	@gcc $(FLAGS) -I$(LIBFT_PATH) -I$(TESTS_PATH) -I$(UTILS_PATH) tests/ft_$*_test.c utils/utils.c  -L$(LIBFT_PATH) -lft && valgrind -q --leak-check=full ./a.out && rm a.out

$(LIBFT_A):
	@make -C $(LIBFT_PATH)

.PHONY: all mem ccc str fd ll
