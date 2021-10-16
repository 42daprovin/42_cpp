NAME	= ex02

SRCS	= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp \
		  FragTrap.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS	= ClapTrap.hpp \
		  ScavTrap.hpp \
		  FragTrap.hpp

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
