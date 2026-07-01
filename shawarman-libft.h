# define shawarman_libft_H

# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define GREEN   "\033[32m"
# define RED     "\033[1m\033[31m"

# define LOG_DEBUG() do { \
		    printf(CYAN ">>> "WHITE "%s():\t",  __func__); \
} while(0)

# define SUCCESS(x)do { \
		    printf( GREEN x); \
} while (0)

# define FAILURE(x) do { \
		    printf( RED x); \
} while(0)

# include <ctype.h>
# include "libft.h"
# include <bsd/string.h>
# include <unistd.h>
# include <fcntl.h>
# include <malloc.h>
# include <stdlib.h>

# endif
