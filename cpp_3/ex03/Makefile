NAME	= ex03

SRCS	= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp \
		  FragTrap.cpp \
		  DiamondTrap.cpp

OBJS	= ${SRCS:.cpp=.o}

DEPS	= ClapTrap.hpp \
		  ScavTrap.hpp \
		  FragTrap.hpp \
		  DiamondTrap.hpp

CFLAGS = -Wall -Werror -Wextra -Wshadow

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
