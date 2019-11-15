NAME			=	libft.a

SRC_PATH		=	src/
SRC_FILES		=	ft_atoi.c				\
					ft_itoa.c				\
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
					ft_tolower.c

SRC_BONUS_FILES	=	ft_lstnew_bonus.c		\
					ft_lstadd_front_bonus.c	\
					ft_lstsize_bonus.c		\


OBJ_PATH 		=	obj/
OBJS			=	$(addprefix $(OBJ_PATH), $(SRC_FILES))
OBJS			:=	$(OBJS:.c=.o)
OBJS_BONUS		=	$(addprefix $(OBJ_PATH), $(SRC_BONUS_FILES))
OBJS_BONUS		:=	$(OBJS_BONUS:.c=.o)

CC				=	cc
RM				=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@ mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I include/ -o $@ -c $< 

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

bonus: $(OBJS) $(OBJS_BONUS) 
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
		ranlib $(NAME)

clean:
	$(RM) $(OBJ_PATH)

cltest:
	$(RM) test

fclean: clean
	$(RM) $(NAME)

re:		fclean all

norm:
	@ echo ============== NORMINETTE SRC ==============
	@! norminette $(SRC_PATH)ft_*.c | grep -B1 "Error\|Warning" | grep --color=always -E "Norme|$$"
	@ echo ============= NORMINETTE HEADER ============
	@! norminette include/*.h | grep -B1 "Error\|Warning" | grep --color=always -E "Norme|$$"

test: all
	$(CC) -I include -L . -l ft -o test src/main_test.c
	./test

.PHONY: all clean fclean re
