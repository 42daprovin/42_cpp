NAME	= replace

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

.cpp.o:
	clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	clang++ ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f *.replace
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
