NAME	= ex03

SRCS	= main.cpp \
	  Bureaucrat.cpp \
	  Form.cpp \
	  ShrubberyCreationForm.cpp \
	  PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Wextra

DEPS	= Bureaucrat.hpp \
	  Form.hpp \
	  ShrubberyCreationForm.hpp \
	  PresidentialPardonForm.hpp \
	  RobotomyRequestForm.hpp

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
