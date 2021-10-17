NAME	= ex01

SRCS	= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS	= ClapTrap.hpp \
		  ScavTrap.hpp

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
