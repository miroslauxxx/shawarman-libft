SOURCES = main.c

OBJS        = $(SRCS:.c=.o)

LIBFT_NAME 		= libft.a
LIBFT_PATH 		= libft/
TESTS_PATH 		= tests/
UTILS_PATH		= utils/

FUNCTIONS		= memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit isalnum \
				  isascii isprint toupper tolower strchr strrchr strncmp strlcpy strlcat strnstr \
				  atoi calloc strdup substr strjoin strtrim split itoa strmapi putchar_fd putstr_fd \
				  putendl_fd putnbr_fd striteri lstnew lstadd_front lstsize lstlast lstadd_back \
				  lstdelone lstclear lstiter lstmap
MEMORY			= memset bzero memcpy memmove memchr memcmp calloc 
C_CLASS			= isalpha isdigit isalnum isascii isprint toupper tolower atoi itoa  
STRINGS			= strlen strchr strrchr strchr strrchr strnstr strdup substr strjoin strtrim split\
				  strmapi # strlcat 
FDESCRIPTOR		= putchar_fd putstr_fd putendl_fd putnbr_fd 
L_LISTS			= lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap 

OBJECTS = $(SOURCES:.c=.o)

NAME = shawarman-libft.a 

CFLAGS = -g -Wall -Wextra -Werror 

$(OBJECTS): %.o: %.c
	@cc -c $(CFLAGS) $^ -o $@

$(FUNCTIONS): %: start
	@gcc $(CFLAGS) -I $(LIBFT_PATH) -I $(TESTS_PATH) -I $(UTILS_PATH) tests/ft_$*_test.c utils/utils.c  -L$(LIBFT_PATH) -lft && valgrind -q --leak-check=full ./a.out && rm a.out 

$(LIBFT_FOLDER)/$(LIBFT_NAME): FORCE
	@make -C $(LIBFT_FOLDER)
	@FORCE: 

memory: start $(MEMORY)

c_type: start $(C_CLASS)

strings: start $(STRINGS)

fdescriptor: start $(FDESCRIPTOR)

l_lists: start $(L_LISTS)

start:
	@make -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECTS)
	make -C $(LIBFT_FOLDER) clean

re: fclean all
