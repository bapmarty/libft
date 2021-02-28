NAME			=	libft.a

SRC_FILES		=	ft_atoi.c				\
					ft_itoa.c				\
					ft_utoa.c				\
					ft_bzero.c				\
					ft_calloc.c				\
					ft_isalnum.c			\
					ft_isalpha.c			\
					ft_isascii.c			\
					ft_isdigit.c			\
					ft_isprint.c			\
					ft_memccpy.c			\
					ft_memchr.c				\
					ft_memcmp.c				\
					ft_memcpy.c				\
					ft_memmove.c			\
					ft_memset.c				\
					ft_putchar_fd.c			\
					ft_putstr_fd.c			\
					ft_putendl_fd.c			\
					ft_putnbr_fd.c			\
					ft_putchar.c			\
					ft_putstr.c				\
					ft_putendl.c			\
					ft_putnbr.c				\
					ft_split.c				\
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
					ft_toupper.c			\
					ft_tolower.c			\
					ft_utoa_base.c			\
					ft_ulltoa_base.c

SRC_BONUS_FILES	=	ft_lstnew_bonus.c		\
					ft_lstadd_front_bonus.c	\
					ft_lstadd_back_bonus.c	\
					ft_lstsize_bonus.c		\
					ft_lstlast_bonus.c		\
					ft_lstdelone_bonus.c	\
					ft_lstclear_bonus.c		\
					ft_lstiter_bonus.c		\
					ft_lstmap_bonus.c		\


OBJS			:=	$(SRC_FILES:.c=.o)
OBJS_BONUS		:=	$(SRC_BONUS_FILES:.c=.o)

CC				=	cc
RM				=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -I libft.h -o $@ -c $< 

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

bonus: $(OBJS) $(OBJS_BONUS) 
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
		ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re bonus
