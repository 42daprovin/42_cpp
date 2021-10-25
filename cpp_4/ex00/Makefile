NAME	= ex00

SRCS	= main.cpp \
		  Animal.cpp \
		  WrongAnimal.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS 	= Animal.hpp \
	  WrongAnimal.hpp

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
