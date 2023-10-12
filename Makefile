#to compile the library
#gcc -Wall -Wextra - Werror -c ft* && ar rc libft.a *.o

#to compile the file with the library and includes
#gcc -Wall -Wextra -Werror main.c -L. -lft -I ./includes/libft.h

#SRC		= $(wildcard ft_*.c)

SRCFILES	= get_next_line.c \
			  ft_strjoin.c \
			  ft_strchr.c \
			  ft_split.c \
			  ft_strtrim.c \
			  ft_bzero.c \
			  ft_strnstr.c \
			  ft_strmapi.c \
			  ft_isprint.c \
			  ft_atoi.c \
			  ft_strdup.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_strnchr.c \
			  ft_substr.c \
			  ft_striteri.c \
			  ft_memchr.c \
			  ft_putnbr_fd.c \
			  ft_strlcpy.c \
			  ft_itoa.c \
			  ft_memset.c \
			  ft_calloc.c \
			  ft_strlen.c \
			  ft_putchar_fd.c \
			  ft_isascii.c \
			  ft_strlcat.c \
			  ft_putendl_fd.c \
			  ft_memcmp.c \
			  ft_isdigit.c \
			  ft_strrchr.c \
			  ft_putstr_fd.c \
			  ft_isalpha.c \
			  ft_strncmp.c \
			  ft_isalnum.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_lstiter.c \
			  ft_lstdelone.c \
			  ft_lstlast.c \
			  ft_lstsize.c \
			  ft_lstmap.c \
			  ft_lstnew.c \
			  ft_lstadd_back.c \
			  ft_lstclear.c \
			  ft_lstadd_front.c \
			  ft_uitoa.c \
			  ft_str_replace_all.c \
			  ft_strmerge.c \
			  ft_atoll.c \
			  ft_uitoa_base.c \
			  ft_str_replace.c \
			  ft_minprintf.c \
			  ft_null_ptr.c \
			  ft_strerase.c \
			  ft_tr.c \
			  ft_is_in_set.c \


CC			= gcc -g3 -o3
AR			= ar
ARFLAGS		= rcs
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

SRCDIR		= src
BONUSDIR	= bonus
OBJDIR		= obj
NAME		= libft.a
HEADER		= libft.h

SOURCE		= $(addprefix $(SRCDIR)/, $(SRCFILES))
BONUSSOURCE = $(addprefix $(BONUSDIR)/, $(BONUSFILES))
OBJ			= $(SOURCE:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
OBJBONUS	= $(BONUSSOURCE:$(BONUSDIR)/%.c=$(OBJDIR)/%.o)

all:			$(OBJDIR) $(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@ -I./


so:			$(OBJDIR) $(OBJ)
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCE) -I./
			$(CC) -nostartfiles -shared -o libft.so $(OBJ)


clean:
			$(RM) $(OBJ) $(OBJBONUS)
			rm -rf obj

fclean:		clean
			$(RM) $(NAME) libft.so

$(OBJDIR):
			mkdir -p obj

re:			fclean all

.PHONY:		all clean fclean re
