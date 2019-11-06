NAME	=	libft.a

SRC		=	src/ft_atoi.c \
				src/ft_bzero.c \
				src/ft_isalpha.c \
				src/ft_isdigit.c \
				src/ft_isalnum.c \
				src/ft_isascii.c \
				src/ft_toupper.c \
				src/ft_tolower.c \
				src/ft_strchr.c \
				src/ft_strrchr.c \
				src/ft_strncmp.c \
				src/ft_memset.c \
				src/ft_memchr.c \
				src/ft_memccpy.c \
				src/ft_memcpy.c

OBJS	=	${SRC:.c=.o}

CC		=	cc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I include -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
