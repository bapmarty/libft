NAME				=	libft.a

SRC_PATH		= src/
SRC_FILES		=	ft_atoi.c \
							ft_bzero.c \
							ft_isalpha.c \
							ft_isdigit.c \
							ft_isalnum.c \
							ft_isascii.c \
							ft_toupper.c \
							ft_tolower.c \
							ft_strchr.c \
							ft_strrchr.c \
							ft_strncmp.c \
							ft_memset.c \
							ft_memchr.c \
							ft_memccpy.c \
							ft_memcpy.c
OBJ_PATH 		= obj/
OBJS				=	$(addprefix $(OBJ_PATH), $(SRC_FILES))
OBJS				:=	$(OBJS:.c=.o)

CC					=	cc
RM					=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I include -c $< -o $(<:$(SRC_PATH)%.c=$(OBJ_PATH)%.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

norm:
	@! norminette $(SRC_PATH)ft_*.c | grep -B1 "Error\|Warning" | grep --color=always -E "Norme|$$"

test: all
	$(CC) -I include -L . -l ft -o test src/main_test.c
	./test

.PHONY: all clean fclean re
