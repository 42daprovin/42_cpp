NAME	= ex03

SRCS	= main.cpp \
		  Materia.cpp \
		  Character.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS =	Materia.hpp \
	Character.hpp

%.o: %.cpp ${DEPS}
	clang++ -c -o $@ $< ${CFLAGS}

${NAME}: ${OBJS}
	clang++ ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
