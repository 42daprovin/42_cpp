NAME	= ex00

SRCS	= main.cpp \
		  Value.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS	=	Value.hpp 

all: ${NAME}

%.o: %.cpp ${DEPS}
	clang++ -c -o $@ $< ${CFLAGS}

${NAME}: ${OBJS}
	clang++ ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
