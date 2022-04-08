NAME = libft.a 

SRC = *.c

CFLAGS = -Werror -Wextra -Wall

OBJ = *.o#*.o #ft_atoi.o 

%.o: %.c
	cc ${CFLAGS} ${SRC} -c

all: ${NAME}

${NAME}: ${OBJ}
	ar -r ${NAME} ${OBJ}

clean:
	rm ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

