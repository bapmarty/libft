NAME				=	libft.a

#checkers
SRC_CHECKER			=	./checker/
SRC_CHECKER_FILES	=	ft_isalnum.c			\
						ft_isalpha.c			\
						ft_isascii.c			\
						ft_isdigit.c			\
						ft_isprint.c

#lists
SRC_LISTS			=	./lists/
SRC_LISTS_FILES		=	ft_lstnew.c				\
						ft_lstadd_front.c		\
						ft_lstadd_back.c		\
						ft_lstsize.c			\
						ft_lstlast.c			\
						ft_lstdelone.c			\
						ft_lstclear.c			\
						ft_lstiter.c			\
						ft_lstmap.c

#memory
SRC_MEMORY			=	./memory/
SRC_MEMORY_FILES	=	ft_memccpy.c			\
						ft_bzero.c				\
						ft_calloc.c				\
						ft_memchr.c				\
						ft_memcmp.c				\
						ft_memcpy.c				\
						ft_memmove.c			\
						ft_memset.c

#convert
SRC_CONVERT			=	./convert/
SRC_CONVERT_FILES	=	ft_atoi.c				\
						ft_itoa.c				\
						ft_utoa.c				\
						ft_utoa_base.c			\
						ft_ulltoa_base.c		\
						ft_toupper.c			\
						ft_tolower.c

#print
SRC_PRINT			=	./print/
SRC_PRINT_FILES		=	ft_putchar_fd.c			\
						ft_putstr_fd.c			\
						ft_putendl_fd.c			\
						ft_putnbr_fd.c			\
						ft_putchar.c			\
						ft_putstr.c				\
						ft_putendl.c			\
						ft_putnbr.c				\

#strings
SRC_STRINGS			=	./strings/
SRC_STRINGS_FILES	=	ft_split.c				\
						ft_strchr.c				\
						ft_strdup.c				\
						ft_strjoin.c			\
						ft_strlcat.c			\
						ft_strlcpy.c			\
						ft_strlen.c				\
						ft_strmapi.c			\
						ft_strncmp.c			\
						ft_strnstr.c			\
						ft_strrchr.c			\
						ft_strtrim.c			\
						ft_substr.c				\
						ft_strnew.c				\
						ft_strjoin_free.c		\

GNL					=	./gnl/get_next_line.c	\

SRCS				=	$(addprefix $(SRC_CHECKER), $(SRC_CHECKER_FILES))	\
						$(addprefix $(SRC_CONVERT), $(SRC_CONVERT_FILES))	\
						$(addprefix $(SRC_STRINGS), $(SRC_STRINGS_FILES))	\
						$(addprefix $(SRC_MEMORY), $(SRC_MEMORY_FILES))		\
						$(addprefix $(SRC_LISTS), $(SRC_LISTS_FILES))		\
						$(addprefix $(SRC_PRINT), $(SRC_PRINT_FILES))		\
						$(GNL)

OBJS				=	$(SRCS:.c=.o)

CC				=	cc
RM				=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -I ./includes/ -o $@ -c $< 

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

norm:
	@norminette -d checker
	@norminette -d convert
	@norminette -d gnl
	@norminette -d lists
	@norminette -d memory
	@norminette -d print
	@norminette -d strings
	@norminette -d includes

.PHONY: all clean fclean re bonus
