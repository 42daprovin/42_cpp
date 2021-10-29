NAME	= find

SRCS	= main.cpp \

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS	= easyfind.hpp 

all: ${NAME}

%.o: %.cpp ${DEPS}
	c++ -c -o $@ $< ${CFLAGS}

${NAME}: ${OBJS}
	c++ ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
