NAME	= Karen

SRCS	= main.cpp \
		  Karen.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

.cpp.o:
	clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	clang++ ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
