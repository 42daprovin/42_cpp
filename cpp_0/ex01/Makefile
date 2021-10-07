NAME	= BestPhoneBook

SRCS	= phone_book.cpp \
	  PhoneBook_class.cpp \
	  contact_class.cpp \
	  utils.cpp

OBJS	= ${SRCS:.cpp=.o}

DEPS 	= includes/contact_class.hpp \
	  includes/PhoneBook_class.hpp

CFLAGS = -Wall -Werror -Wextra -I includes

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
